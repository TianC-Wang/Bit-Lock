#include "wtcipher.h"

#pragma region /* --- rev --- */
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
int8_t wtcipher_rev8(int8_t _In, int8_t _Key)
{
    int8_t ret = (int8_t)0;
    WTCIPHER_COMPRESS_A(8, 8, 1, 8)
    WTCIPHER_COMPRESS_A(8, 8, 2, 7)
    WTCIPHER_COMPRESS_A(8, 8, 3, 6)
    WTCIPHER_COMPRESS_A(8, 8, 4, 5)
    return ret;
}

int16_t wtcipher_rev16(int16_t _In, int8_t _Key)
{
    int16_t ret = (int16_t)0;
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

int32_t wtcipher_rev32(int32_t _In, int16_t _Key)
{
    int32_t ret = (int32_t)0;
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

int64_t wtcipher_rev64(int64_t _In, int32_t _Key)
{
    int64_t ret = (int64_t)0;
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
#define WTCIPHER_COMPRESS_A(b)\
int##b##_t wtcipher_cover##b(int##b##_t _In, int##b##_t _Key)\
{\
    return _In ^ _Key;\
}
WTCIPHER_COMPRESS_A(8)
WTCIPHER_COMPRESS_A(16)
WTCIPHER_COMPRESS_A(32)
WTCIPHER_COMPRESS_A(64)
#undef WTCIPHER_COMPRESS_A
#pragma endregion

int16_t wtcipher_8to16(int8_t* _In, int8_t _Key)
{
    int16_t ret = (int16_t)0;
#define WTCIPHER_COMPRESS_A(a, b)\
    if (WTCIPHER_8_BIT(a, _Key))\
    {\
        if (WTCIPHER_8_BIT(a, _In[0]))\
            WTCIPHER_16_SET(a, ret);\
        if (WTCIPHER_8_BIT(a, _In[1]))\
            WTCIPHER_16_SET(b, ret);\
    }\
    else\
    {\
        if (WTCIPHER_8_BIT(a, _In[1]))\
            WTCIPHER_16_SET(a, ret);\
        if (WTCIPHER_8_BIT(a, _In[0]))\
            WTCIPHER_16_SET(b, ret);\
    }
    WTCIPHER_COMPRESS_A(1, 9)
    WTCIPHER_COMPRESS_A(2, 10)
    WTCIPHER_COMPRESS_A(3, 11)
    WTCIPHER_COMPRESS_A(4, 12)
    WTCIPHER_COMPRESS_A(5, 13)
    WTCIPHER_COMPRESS_A(6, 14)
    WTCIPHER_COMPRESS_A(7, 15)
    WTCIPHER_COMPRESS_A(8, 16)
#undef WTCIPHER_COMPRESS_A
    return ret;
}

int16_t wtcipher_16to8(int16_t _In, int8_t _Key)
{
    int16_t ret = (int16_t)0;
#define WTCIPHER_COMPRESS_A(a, b)\
    if (WTCIPHER_8_BIT(a, _Key))\
    {\
        if (WTCIPHER_16_BIT(b, _In))\
            WTCIPHER_16_SET(a, ret);\
        if (WTCIPHER_16_BIT(a, _In))\
            WTCIPHER_16_SET(b, ret);\
    }\
    else\
    {\
        if (WTCIPHER_16_BIT(a, _In))\
            WTCIPHER_16_SET(a, ret);\
        if (WTCIPHER_16_BIT(b, _In))\
            WTCIPHER_16_SET(b, ret);\
    }
    WTCIPHER_COMPRESS_A(1, 9)
    WTCIPHER_COMPRESS_A(2, 10)
    WTCIPHER_COMPRESS_A(3, 11)
    WTCIPHER_COMPRESS_A(4, 12)
    WTCIPHER_COMPRESS_A(5, 13)
    WTCIPHER_COMPRESS_A(6, 14)
    WTCIPHER_COMPRESS_A(7, 15)
    WTCIPHER_COMPRESS_A(8, 16)
#undef WTCIPHER_COMPRESS_A
    return ret;
}