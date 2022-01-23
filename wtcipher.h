#include <stdint.h>
#include <stdbool.h>

#pragma region
#define WTCIPHER_8_LO(x) (x & (int8_t)0x0F)
#define WTCIPHER_8_HI(x) ((x & (int8_t)0xF0) >> 4)
#define __WTCIPHER_8_OPR1(x, op) (x op (int8_t)0x01)
#define __WTCIPHER_8_OPR2(x, op) (x op (int8_t)0x02)
#define __WTCIPHER_8_OPR3(x, op) (x op (int8_t)0x04)
#define __WTCIPHER_8_OPR4(x, op) (x op (int8_t)0x08)
#define __WTCIPHER_8_OPR5(x, op) (x op (int8_t)0x10)
#define __WTCIPHER_8_OPR6(x, op) (x op (int8_t)0x20)
#define __WTCIPHER_8_OPR7(x, op) (x op (int8_t)0x40)
#define __WTCIPHER_8_OPR8(x, op) (x op (int8_t)0x80)
#define WTCIPHER_8_BIT(b, x) __WTCIPHER_8_OPR##b(x, &)
#define WTCIPHER_8_SET(b, x) __WTCIPHER_8_OPR##b(x, |=)
#define WTCIPHER_8_CHG(b, x) __WTCIPHER_8_OPR##b(x, ^=)
#define WTCIPHER_8_CLR(b, x) __WTCIPHER_8_OPR##b(x, &=~)
#pragma endregion

/// @brief Reverse specific bits.
/// @param _In The input.
/// @param _Key 4 bit key.
/// @return Reversed bits.
int8_t wtcipher_rev8(int8_t _In, int8_t _Key);

/// @brief Add a cover.
/// @param _In The input.
/// @param _Key 8 bit key.
/// @return Covered bits.
int8_t wtcipher_cover8(int8_t _In, int8_t _Key);