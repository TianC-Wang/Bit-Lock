#include "wtcipher.h"

#pragma region /* --- reverse --- */
#define WTCIPHER_COMPRESS_A(a, b, x, y)\
    if (WTCIPHER_##a##_BIT(x, _Key))\
    {\
        if (WTCIPHER_##b##_BIT(x, _In))\
            WTCIPHER_##b##_SET(y, ret);\
        if (WTCIPHER_##b##_BIT(y, _In))\
            WTCIPHER_##b##_SET(x, ret);\
    }\
    else\
    {\
        if (WTCIPHER_##b##_BIT(x, _In))\
            WTCIPHER_##b##_SET(x, ret);\
        if (WTCIPHER_##b##_BIT(y, _In))\
            WTCIPHER_##b##_SET(y, ret);\
    }
uint8_t wtcipher_reverse8(uint8_t _In, uint8_t _Key)
{
    uint8_t ret = (uint8_t)0;
    WTCIPHER_COMPRESS_A(8, 8, 1, 8)
    WTCIPHER_COMPRESS_A(8, 8, 2, 7)
    WTCIPHER_COMPRESS_A(8, 8, 3, 6)
    WTCIPHER_COMPRESS_A(8, 8, 4, 5)
    return ret;
}
uint16_t wtcipher_reverse16(uint16_t _In, uint8_t _Key)
{
    uint16_t ret = (uint16_t)0;
    WTCIPHER_COMPRESS_A(8, 16, 1, 16)
    WTCIPHER_COMPRESS_A(8, 16, 2, 15)
    WTCIPHER_COMPRESS_A(8, 16, 3, 14)
    WTCIPHER_COMPRESS_A(8, 16, 4, 13)
    WTCIPHER_COMPRESS_A(8, 16, 5, 12)
    WTCIPHER_COMPRESS_A(8, 16, 6, 11)
    WTCIPHER_COMPRESS_A(8, 16, 7, 10)
    WTCIPHER_COMPRESS_A(8, 16, 8, 9)
    return ret;
}
uint32_t wtcipher_reverse32(uint32_t _In, uint16_t _Key)
{
    uint32_t ret = (uint32_t)0;
    WTCIPHER_COMPRESS_A(16, 32, 1, 32)
    WTCIPHER_COMPRESS_A(16, 32, 2, 31)
    WTCIPHER_COMPRESS_A(16, 32, 3, 30)
    WTCIPHER_COMPRESS_A(16, 32, 4, 29)
    WTCIPHER_COMPRESS_A(16, 32, 5, 28)
    WTCIPHER_COMPRESS_A(16, 32, 6, 27)
    WTCIPHER_COMPRESS_A(16, 32, 7, 26)
    WTCIPHER_COMPRESS_A(16, 32, 8, 25)
    WTCIPHER_COMPRESS_A(16, 32, 9, 24)
    WTCIPHER_COMPRESS_A(16, 32, 10, 23)
    WTCIPHER_COMPRESS_A(16, 32, 11, 22)
    WTCIPHER_COMPRESS_A(16, 32, 12, 21)
    WTCIPHER_COMPRESS_A(16, 32, 13, 20)
    WTCIPHER_COMPRESS_A(16, 32, 14, 19)
    WTCIPHER_COMPRESS_A(16, 32, 15, 18)
    WTCIPHER_COMPRESS_A(16, 32, 16, 17)
    return ret;
}
uint64_t wtcipher_reverse64(uint64_t _In, uint32_t _Key)
{
    uint64_t ret = (uint64_t)0;
    WTCIPHER_COMPRESS_A(32, 64, 1, 64)
    WTCIPHER_COMPRESS_A(32, 64, 2, 63)
    WTCIPHER_COMPRESS_A(32, 64, 3, 62)
    WTCIPHER_COMPRESS_A(32, 64, 4, 61)
    WTCIPHER_COMPRESS_A(32, 64, 5, 60)
    WTCIPHER_COMPRESS_A(32, 64, 6, 59)
    WTCIPHER_COMPRESS_A(32, 64, 7, 58)
    WTCIPHER_COMPRESS_A(32, 64, 8, 57)
    WTCIPHER_COMPRESS_A(32, 64, 9, 56)
    WTCIPHER_COMPRESS_A(32, 64, 10, 55)
    WTCIPHER_COMPRESS_A(32, 64, 11, 54)
    WTCIPHER_COMPRESS_A(32, 64, 12, 53)
    WTCIPHER_COMPRESS_A(32, 64, 13, 52)
    WTCIPHER_COMPRESS_A(32, 64, 14, 51)
    WTCIPHER_COMPRESS_A(32, 64, 15, 50)
    WTCIPHER_COMPRESS_A(32, 64, 16, 49)
    WTCIPHER_COMPRESS_A(32, 64, 17, 48)
    WTCIPHER_COMPRESS_A(32, 64, 18, 47)
    WTCIPHER_COMPRESS_A(32, 64, 19, 46)
    WTCIPHER_COMPRESS_A(32, 64, 20, 45)
    WTCIPHER_COMPRESS_A(32, 64, 21, 44)
    WTCIPHER_COMPRESS_A(32, 64, 22, 43)
    WTCIPHER_COMPRESS_A(32, 64, 23, 42)
    WTCIPHER_COMPRESS_A(32, 64, 24, 41)
    WTCIPHER_COMPRESS_A(32, 64, 25, 40)
    WTCIPHER_COMPRESS_A(32, 64, 26, 39)
    WTCIPHER_COMPRESS_A(32, 64, 27, 38)
    WTCIPHER_COMPRESS_A(32, 64, 28, 37)
    WTCIPHER_COMPRESS_A(32, 64, 29, 36)
    WTCIPHER_COMPRESS_A(32, 64, 30, 35)
    WTCIPHER_COMPRESS_A(32, 64, 31, 34)
    WTCIPHER_COMPRESS_A(32, 64, 32, 33)
    return ret;
}
#undef WTCIPHER_COMPRESS_A
#pragma endregion
#pragma region /* --- cover --- */
#define WTCIPHER_COMPRESS_A_ALL \
WTCIPHER_COMPRESS_A(8)\
WTCIPHER_COMPRESS_A(16)\
WTCIPHER_COMPRESS_A(32)\
WTCIPHER_COMPRESS_A(64)
#define WTCIPHER_COMPRESS_A(b)\
uint##b##_t wtcipher_cover##b(uint##b##_t _In, uint##b##_t _Key)\
{\
    return _In ^ _Key;\
}
WTCIPHER_COMPRESS_A_ALL
#undef WTCIPHER_COMPRESS_A
#pragma endregion
#pragma region /* --- exchange --- */
#define WTCIPHER_COMPRESS_A(b)\
void wtcipher_exchange##b(uint##b##_t* _In1, uint##b##_t* _In2)\
{\
    *_In1 ^= *_In2;\
    *_In2 ^= *_In1;\
    *_In1 ^= *_In2;\
}
WTCIPHER_COMPRESS_A_ALL
#undef WTCIPHER_COMPRESS_A
#undef WTCIPHER_COMPRESS_A_ALL
#pragma endregion
#pragma region /* --- endian --- */
uint8_t wtcipher_endian8(uint8_t _In)
{
    return _In;
}
uint16_t wtcipher_endian16(uint16_t _In)
{
    return (_In & (uint16_t)0x00FF) << 8 | (_In & (uint16_t)0xFF00) >> 8;
}
uint32_t wtcipher_endian32(uint32_t _In)
{
    return (_In & (uint32_t)0x000000FF) << 24 | (_In & (uint32_t)0x0000FF00) << 8 | (_In & (uint32_t)0x00FF0000) >> 8 | (_In & (uint32_t)0xFF000000) >> 24;
}
uint64_t wtcipher_endian64(uint64_t _In)
{
    return (uint64_t)((_In & (uint64_t)0x00000000000000FF) << 56 | (_In & (uint64_t)0x000000000000FF00) << 40 | (_In & (uint64_t)0x0000000000FF0000) << 24 | (_In & (uint64_t)0x00000000FF000000) << 8 | (_In & (uint64_t)0x000000FF00000000) >> 8 | (_In & (uint64_t)0x0000FF0000000000) >> 24 | (_In & (uint64_t)0x00FF000000000000) >> 40 | (_In & (uint64_t)0xFF00000000000000) >> 56);
}
#pragma endregion