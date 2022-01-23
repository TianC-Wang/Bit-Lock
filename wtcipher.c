#include "wtcipher.h"

int8_t wtcipher_rev8(int8_t _In, int8_t _Key)
{
    int8_t ret = (int8_t)0;
    if (WTCIPHER_8_BIT(1, _Key))
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
    if (WTCIPHER_8_BIT(2, _Key))
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
    if (WTCIPHER_8_BIT(3, _Key))
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
    if (WTCIPHER_8_BIT(4, _Key))
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

int8_t wtcipher_cover8(int8_t _In, int8_t _Key)
{
    return _In ^ _Key;
}

int16_t wtcipher_8to16(int8_t* _In, int8_t _Key)
{
    int16_t ret = (int16_t)0;
    if (WTCIPHER_8_BIT(1, _Key))
    {
        if (WTCIPHER_8_BIT(1, _In[0]))
            WTCIPHER_16_SET(1, ret);
        if (WTCIPHER_8_BIT(1, _In[1]))
            WTCIPHER_16_SET(9, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(1, _In[1]))
            WTCIPHER_16_SET(9, ret);
        if (WTCIPHER_8_BIT(1, _In[0]))
            WTCIPHER_16_SET(1, ret);
    }
    if (WTCIPHER_8_BIT(2, _Key))
    {
        if (WTCIPHER_8_BIT(2, _In[0]))
            WTCIPHER_16_SET(2, ret);
        if (WTCIPHER_8_BIT(2, _In[1]))
            WTCIPHER_16_SET(10, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(2, _In[1]))
            WTCIPHER_16_SET(2, ret);
        if (WTCIPHER_8_BIT(2, _In[0]))
            WTCIPHER_16_SET(10, ret);
    }
    if (WTCIPHER_8_BIT(3, _Key))
    {
        if (WTCIPHER_8_BIT(3, _In[0]))
            WTCIPHER_16_SET(3, ret);
        if (WTCIPHER_8_BIT(3, _In[1]))
            WTCIPHER_16_SET(11, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(3, _In[1]))
            WTCIPHER_16_SET(3, ret);
        if (WTCIPHER_8_BIT(3, _In[0]))
            WTCIPHER_16_SET(11, ret);
    }
    if (WTCIPHER_8_BIT(4, _Key))
    {
        if (WTCIPHER_8_BIT(4, _In[0]))
            WTCIPHER_16_SET(4, ret);
        if (WTCIPHER_8_BIT(4, _In[1]))
            WTCIPHER_16_SET(12, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(4, _In[1]))
            WTCIPHER_16_SET(4, ret);
        if (WTCIPHER_8_BIT(4, _In[0]))
            WTCIPHER_16_SET(12, ret);
    }
    if (WTCIPHER_8_BIT(5, _Key))
    {
        if (WTCIPHER_8_BIT(5, _In[0]))
            WTCIPHER_16_SET(5, ret);
        if (WTCIPHER_8_BIT(5, _In[1]))
            WTCIPHER_16_SET(13, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(5, _In[1]))
            WTCIPHER_16_SET(5, ret);
        if (WTCIPHER_8_BIT(5, _In[0]))
            WTCIPHER_16_SET(13, ret);
    }
    if (WTCIPHER_8_BIT(6, _Key))
    {
        if (WTCIPHER_8_BIT(6, _In[0]))
            WTCIPHER_16_SET(6, ret);
        if (WTCIPHER_8_BIT(6, _In[1]))
            WTCIPHER_16_SET(14, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(6, _In[1]))
            WTCIPHER_16_SET(6, ret);
        if (WTCIPHER_8_BIT(6, _In[0]))
            WTCIPHER_16_SET(14, ret);
    }
    if (WTCIPHER_8_BIT(7, _Key))
    {
        if (WTCIPHER_8_BIT(7, _In[0]))
            WTCIPHER_16_SET(7, ret);
        if (WTCIPHER_8_BIT(7, _In[1]))
            WTCIPHER_16_SET(15, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(7, _In[1]))
            WTCIPHER_16_SET(7, ret);
        if (WTCIPHER_8_BIT(7, _In[0]))
            WTCIPHER_16_SET(15, ret);
    }
    if (WTCIPHER_8_BIT(8, _Key))
    {
        if (WTCIPHER_8_BIT(8, _In[0]))
            WTCIPHER_16_SET(8, ret);
        if (WTCIPHER_8_BIT(8, _In[1]))
            WTCIPHER_16_SET(16, ret);
    }
    else
    {
        if (WTCIPHER_8_BIT(8, _In[1]))
            WTCIPHER_16_SET(8, ret);
        if (WTCIPHER_8_BIT(8, _In[0]))
            WTCIPHER_16_SET(16, ret);
    }
    return ret;
}

int16_t wtcipher_16to8(int16_t _In, int8_t _Key)
{
    int16_t ret = (int16_t)0;
    if (WTCIPHER_8_BIT(1, _Key))
    {
        if (WTCIPHER_16_BIT(9, _In))
            WTCIPHER_16_SET(1, ret);
        if (WTCIPHER_16_BIT(1, _In))
            WTCIPHER_16_SET(9, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(1, _In))
            WTCIPHER_16_SET(1, ret);
        if (WTCIPHER_16_BIT(9, _In))
            WTCIPHER_16_SET(9, ret);
    }
    if (WTCIPHER_8_BIT(2, _Key))
    {
        if (WTCIPHER_16_BIT(10, _In))
            WTCIPHER_16_SET(2, ret);
        if (WTCIPHER_16_BIT(2, _In))
            WTCIPHER_16_SET(10, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(2, _In))
            WTCIPHER_16_SET(2, ret);
        if (WTCIPHER_16_BIT(10, _In))
            WTCIPHER_16_SET(10, ret);
    }
    if (WTCIPHER_8_BIT(3, _Key))
    {
        if (WTCIPHER_16_BIT(11, _In))
            WTCIPHER_16_SET(3, ret);
        if (WTCIPHER_16_BIT(3, _In))
            WTCIPHER_16_SET(11, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(3, _In))
            WTCIPHER_16_SET(3, ret);
        if (WTCIPHER_16_BIT(11, _In))
            WTCIPHER_16_SET(11, ret);
    }
    if (WTCIPHER_8_BIT(4, _Key))
    {
        if (WTCIPHER_16_BIT(12, _In))
            WTCIPHER_16_SET(4, ret);
        if (WTCIPHER_16_BIT(4, _In))
            WTCIPHER_16_SET(12, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(4, _In))
            WTCIPHER_16_SET(4, ret);
        if (WTCIPHER_16_BIT(12, _In))
            WTCIPHER_16_SET(12, ret);
    }
    if (WTCIPHER_8_BIT(5, _Key))
    {
        if (WTCIPHER_16_BIT(13, _In))
            WTCIPHER_16_SET(5, ret);
        if (WTCIPHER_16_BIT(5, _In))
            WTCIPHER_16_SET(13, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(5, _In))
            WTCIPHER_16_SET(5, ret);
        if (WTCIPHER_16_BIT(13, _In))
            WTCIPHER_16_SET(13, ret);
    }
    if (WTCIPHER_8_BIT(6, _Key))
    {
        if (WTCIPHER_16_BIT(14, _In))
            WTCIPHER_16_SET(6, ret);
        if (WTCIPHER_16_BIT(6, _In))
            WTCIPHER_16_SET(14, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(6, _In))
            WTCIPHER_16_SET(6, ret);
        if (WTCIPHER_16_BIT(14, _In))
            WTCIPHER_16_SET(14, ret);
    }
    if (WTCIPHER_8_BIT(7, _Key))
    {
        if (WTCIPHER_16_BIT(15, _In))
            WTCIPHER_16_SET(7, ret);
        if (WTCIPHER_16_BIT(7, _In))
            WTCIPHER_16_SET(15, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(7, _In))
            WTCIPHER_16_SET(7, ret);
        if (WTCIPHER_16_BIT(15, _In))
            WTCIPHER_16_SET(15, ret);
    }
    if (WTCIPHER_8_BIT(8, _Key))
    {
        if (WTCIPHER_16_BIT(16, _In))
            WTCIPHER_16_SET(8, ret);
        if (WTCIPHER_16_BIT(8, _In))
            WTCIPHER_16_SET(16, ret);
    }
    else
    {
        if (WTCIPHER_16_BIT(8, _In))
            WTCIPHER_16_SET(8, ret);
        if (WTCIPHER_16_BIT(16, _In))
            WTCIPHER_16_SET(16, ret);
    }
    return ret;
}