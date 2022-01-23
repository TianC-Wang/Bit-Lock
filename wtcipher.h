#include <stdint.h>
#include <stdbool.h>

#pragma region
#define __WTCIPHER_8_OPR1(x, op) (x op (int8_t)0x01)
#define __WTCIPHER_8_OPR2(x, op) (x op (int8_t)0x02)
#define __WTCIPHER_8_OPR3(x, op) (x op (int8_t)0x04)
#define __WTCIPHER_8_OPR4(x, op) (x op (int8_t)0x08)
#define __WTCIPHER_8_OPR5(x, op) (x op (int8_t)0x10)
#define __WTCIPHER_8_OPR6(x, op) (x op (int8_t)0x20)
#define __WTCIPHER_8_OPR7(x, op) (x op (int8_t)0x40)
#define __WTCIPHER_8_OPR8(x, op) (x op (int8_t)0x80)

#define __WTCIPHER_16_OPR1(x, op) (x op (int16_t)0x0001)
#define __WTCIPHER_16_OPR2(x, op) (x op (int16_t)0x0002)
#define __WTCIPHER_16_OPR3(x, op) (x op (int16_t)0x0004)
#define __WTCIPHER_16_OPR4(x, op) (x op (int16_t)0x0008)
#define __WTCIPHER_16_OPR5(x, op) (x op (int16_t)0x0010)
#define __WTCIPHER_16_OPR6(x, op) (x op (int16_t)0x0020)
#define __WTCIPHER_16_OPR7(x, op) (x op (int16_t)0x0040)
#define __WTCIPHER_16_OPR8(x, op) (x op (int16_t)0x0080)
#define __WTCIPHER_16_OPR9(x, op) (x op (int16_t)0x0100)
#define __WTCIPHER_16_OPR10(x, op) (x op (int16_t)0x0200)
#define __WTCIPHER_16_OPR11(x, op) (x op (int16_t)0x0400)
#define __WTCIPHER_16_OPR12(x, op) (x op (int16_t)0x0800)
#define __WTCIPHER_16_OPR13(x, op) (x op (int16_t)0x1000)
#define __WTCIPHER_16_OPR14(x, op) (x op (int16_t)0x2000)
#define __WTCIPHER_16_OPR15(x, op) (x op (int16_t)0x4000)
#define __WTCIPHER_16_OPR16(x, op) (x op (int16_t)0x8000)
#pragma endregion
#pragma region
#define WTCIPHER_8_LO(x) (x & (int8_t)0x0F)
#define WTCIPHER_8_HI(x) ((x & (int8_t)0xF0) >> 4)
#define WTCIPHER_8_BIT(b, x) __WTCIPHER_8_OPR##b(x, &)
#define WTCIPHER_8_SET(b, x) __WTCIPHER_8_OPR##b(x, |=)
#define WTCIPHER_8_CHG(b, x) __WTCIPHER_8_OPR##b(x, ^=)
#define WTCIPHER_8_CLR(b, x) __WTCIPHER_8_OPR##b(x, &=~)

#define WTCIPHER_16_LO(x) (x & (int16_t)0x00FF)
#define WTCIPHER_16_HI(x) ((x & (int16_t)0xFF00) >> 8)
#define WTCIPHER_16_BIT(b, x) __WTCIPHER_16_OPR##b(x, &)
#define WTCIPHER_16_SET(b, x) __WTCIPHER_16_OPR##b(x, |=)
#define WTCIPHER_16_CHG(b, x) __WTCIPHER_16_OPR##b(x, ^=)
#define WTCIPHER_16_CLR(b, x) __WTCIPHER_16_OPR##b(x, &=~)

#define WTCIPHER_32_LO(x) (x & (int32_t)0x0000FFFF)
#define WTCIPHER_32_HI(x) ((x & (int32_t)0xFFFF0000) >> 16)

#define WTCIPHER_64_LO(x) (x & (int64_t)0x00000000FFFFFFFF)
#define WTCIPHER_64_HI(x) ((x & (int64_t)0xFFFFFFFF00000000) >> 32)

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

/// @brief Put 16 bits mixed together.
/// @param _In The input.
/// @param _Key 8 bit key.
/// @return The combined 16 bits.
int16_t wtcipher_8to16(int8_t* _In, int8_t _Key);

/// @brief Put 16 bits reordered.
/// @param _In The input.
/// @param _Key 8 bit key.
/// @return The reordered 16 bits.
int16_t wtcipher_16to8(int16_t _In, int8_t _Key);