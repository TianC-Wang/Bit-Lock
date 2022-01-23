#include "wtcipher.h"

int8_t wtcipher_rev8(int8_t _In, int8_t _Val)
{
    int8_t ret = (int8_t)0;
    if (WTCIPHER_8_BIT(1, _Val))
    {
        if (WTCIPHER_8_BIT(1, _In))
            WTCIPHER_8_SET(8, ret);
        if (WTCIPHER_8_BIT(8, _In))
            WTCIPHER_8_SET(1, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(1, _In))
            WTCIPHER_8_SET(1, ret);
        if (WTCIPHER_8_BIT(8, _In))
            WTCIPHER_8_SET(8, ret);
    }
    if (WTCIPHER_8_BIT(2, _Val))
    {
        if (WTCIPHER_8_BIT(2, _In))
            WTCIPHER_8_SET(7, ret);
        if (WTCIPHER_8_BIT(7, _In))
            WTCIPHER_8_SET(2, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(2, _In))
            WTCIPHER_8_SET(2, ret);
        if (WTCIPHER_8_BIT(7, _In))
            WTCIPHER_8_SET(7, ret);
    }
    if (WTCIPHER_8_BIT(3, _Val))
    {
        if (WTCIPHER_8_BIT(3, _In))
            WTCIPHER_8_SET(6, ret);
        if (WTCIPHER_8_BIT(6, _In))
            WTCIPHER_8_SET(3, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(3, _In))
            WTCIPHER_8_SET(3, ret);
        if (WTCIPHER_8_BIT(6, _In))
            WTCIPHER_8_SET(6, ret);
    }
    if (WTCIPHER_8_BIT(4, _Val))
    {
        if (WTCIPHER_8_BIT(4, _In))
            WTCIPHER_8_SET(5, ret);
        if (WTCIPHER_8_BIT(5, _In))
            WTCIPHER_8_SET(4, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(4, _In))
            WTCIPHER_8_SET(4, ret);
        if (WTCIPHER_8_BIT(5, _In))
            WTCIPHER_8_SET(5, ret);
    }
    return ret;
}