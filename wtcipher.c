#include "wtcipher.h"

int8_t wtcipher_rev8(int8_t _In, int8_t _Key)
{
    int8_t ret = (int8_t)0;
#define WTCIPHER_COMPRESS_A(a, b)\
    if (WTCIPHER_8_BIT(a, _Key))\
    {\
        if (WTCIPHER_8_BIT(a, _In))\
            WTCIPHER_8_SET(b, ret);\
        if (WTCIPHER_8_BIT(b, _In))\
            WTCIPHER_8_SET(a, ret);\
    }\
    else\
    {\
        if (WTCIPHER_8_BIT(a, _In))\
            WTCIPHER_8_SET(a, ret);\
        if (WTCIPHER_8_BIT(b, _In))\
            WTCIPHER_8_SET(b, ret);\
    }
    WTCIPHER_COMPRESS_A(1, 8)
    WTCIPHER_COMPRESS_A(2, 7)
    WTCIPHER_COMPRESS_A(3, 6)
    WTCIPHER_COMPRESS_A(4, 5)
#undef WTCIPHER_COMPRESS_A
    return ret;
}

#pragma region
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