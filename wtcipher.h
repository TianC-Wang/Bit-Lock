#include <stdint.h>
#include <stdbool.h>

#pragma region
#define WTCIPHER_8_LO(x) (x & (int8_t)0x0F)
#define WTCIPHER_8_HI(x) ((x & (int8_t)0xF0) >> 4)
#define __WTCIPHER_8_1(x) (x & (int8_t)0x01)
#define __WTCIPHER_8_2(x) (x & (int8_t)0x02)
#define __WTCIPHER_8_3(x) (x & (int8_t)0x04)
#define __WTCIPHER_8_4(x) (x & (int8_t)0x08)
#define __WTCIPHER_8_5(x) (x & (int8_t)0x10)
#define __WTCIPHER_8_6(x) (x & (int8_t)0x20)
#define __WTCIPHER_8_7(x) (x & (int8_t)0x40)
#define __WTCIPHER_8_8(x) (x & (int8_t)0x80)
#define __WTCIPHER_8_SET1(x) (x |= (int8_t)0x01)
#define __WTCIPHER_8_SET2(x) (x |= (int8_t)0x02)
#define __WTCIPHER_8_SET3(x) (x |= (int8_t)0x04)
#define __WTCIPHER_8_SET4(x) (x |= (int8_t)0x08)
#define __WTCIPHER_8_SET5(x) (x |= (int8_t)0x10)
#define __WTCIPHER_8_SET6(x) (x |= (int8_t)0x20)
#define __WTCIPHER_8_SET7(x) (x |= (int8_t)0x40)
#define __WTCIPHER_8_SET8(x) (x |= (int8_t)0x80)
#define WTCIPHER_8_BIT(b, x) __WTCIPHER_8_##b(x)
#define WTCIPHER_8_SET(b, x) __WTCIPHER_8_SET##b(x)
#pragma endregion

/// @brief Reverse specific bits.
/// @param _In The input.
/// @param _Key 4 bit key.
/// @return Reversed bits.
int8_t wtcipher_rev8(int8_t _In, int8_t _Key);