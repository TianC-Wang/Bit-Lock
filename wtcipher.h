#include <stdint.h>

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

#define __WTCIPHER_32_OPR1(x, op) (x op (int32_t)0x00000001)
#define __WTCIPHER_32_OPR2(x, op) (x op (int32_t)0x00000002)
#define __WTCIPHER_32_OPR3(x, op) (x op (int32_t)0x00000004)
#define __WTCIPHER_32_OPR4(x, op) (x op (int32_t)0x00000008)
#define __WTCIPHER_32_OPR5(x, op) (x op (int32_t)0x00000010)
#define __WTCIPHER_32_OPR6(x, op) (x op (int32_t)0x00000020)
#define __WTCIPHER_32_OPR7(x, op) (x op (int32_t)0x00000040)
#define __WTCIPHER_32_OPR8(x, op) (x op (int32_t)0x00000080)
#define __WTCIPHER_32_OPR9(x, op) (x op (int32_t)0x00000100)
#define __WTCIPHER_32_OPR10(x, op) (x op (int32_t)0x00000200)
#define __WTCIPHER_32_OPR11(x, op) (x op (int32_t)0x00000400)
#define __WTCIPHER_32_OPR12(x, op) (x op (int32_t)0x00000800)
#define __WTCIPHER_32_OPR13(x, op) (x op (int32_t)0x00001000)
#define __WTCIPHER_32_OPR14(x, op) (x op (int32_t)0x00002000)
#define __WTCIPHER_32_OPR15(x, op) (x op (int32_t)0x00004000)
#define __WTCIPHER_32_OPR16(x, op) (x op (int32_t)0x00008000)
#define __WTCIPHER_32_OPR17(x, op) (x op (int32_t)0x00010000)
#define __WTCIPHER_32_OPR18(x, op) (x op (int32_t)0x00020000)
#define __WTCIPHER_32_OPR19(x, op) (x op (int32_t)0x00040000)
#define __WTCIPHER_32_OPR20(x, op) (x op (int32_t)0x00080000)
#define __WTCIPHER_32_OPR21(x, op) (x op (int32_t)0x00100000)
#define __WTCIPHER_32_OPR22(x, op) (x op (int32_t)0x00200000)
#define __WTCIPHER_32_OPR23(x, op) (x op (int32_t)0x00400000)
#define __WTCIPHER_32_OPR24(x, op) (x op (int32_t)0x00800000)
#define __WTCIPHER_32_OPR25(x, op) (x op (int32_t)0x01000000)
#define __WTCIPHER_32_OPR26(x, op) (x op (int32_t)0x02000000)
#define __WTCIPHER_32_OPR27(x, op) (x op (int32_t)0x04000000)
#define __WTCIPHER_32_OPR28(x, op) (x op (int32_t)0x08000000)
#define __WTCIPHER_32_OPR29(x, op) (x op (int32_t)0x10000000)
#define __WTCIPHER_32_OPR30(x, op) (x op (int32_t)0x20000000)
#define __WTCIPHER_32_OPR31(x, op) (x op (int32_t)0x40000000)
#define __WTCIPHER_32_OPR32(x, op) (x op (int32_t)0x80000000)

#define __WTCIPHER_64_OPR1(x, op) (x op (int64_t)0x0000000000000001)
#define __WTCIPHER_64_OPR2(x, op) (x op (int64_t)0x0000000000000002)
#define __WTCIPHER_64_OPR3(x, op) (x op (int64_t)0x0000000000000004)
#define __WTCIPHER_64_OPR4(x, op) (x op (int64_t)0x0000000000000008)
#define __WTCIPHER_64_OPR5(x, op) (x op (int64_t)0x0000000000000010)
#define __WTCIPHER_64_OPR6(x, op) (x op (int64_t)0x0000000000000020)
#define __WTCIPHER_64_OPR7(x, op) (x op (int64_t)0x0000000000000040)
#define __WTCIPHER_64_OPR8(x, op) (x op (int64_t)0x0000000000000080)
#define __WTCIPHER_64_OPR9(x, op) (x op (int64_t)0x0000000000000100)
#define __WTCIPHER_64_OPR10(x, op) (x op (int64_t)0x0000000000000200)
#define __WTCIPHER_64_OPR11(x, op) (x op (int64_t)0x0000000000000400)
#define __WTCIPHER_64_OPR12(x, op) (x op (int64_t)0x0000000000000800)
#define __WTCIPHER_64_OPR13(x, op) (x op (int64_t)0x0000000000001000)
#define __WTCIPHER_64_OPR14(x, op) (x op (int64_t)0x0000000000002000)
#define __WTCIPHER_64_OPR15(x, op) (x op (int64_t)0x0000000000004000)
#define __WTCIPHER_64_OPR16(x, op) (x op (int64_t)0x0000000000008000)
#define __WTCIPHER_64_OPR17(x, op) (x op (int64_t)0x0000000000010000)
#define __WTCIPHER_64_OPR18(x, op) (x op (int64_t)0x0000000000020000)
#define __WTCIPHER_64_OPR19(x, op) (x op (int64_t)0x0000000000040000)
#define __WTCIPHER_64_OPR20(x, op) (x op (int64_t)0x0000000000080000)
#define __WTCIPHER_64_OPR21(x, op) (x op (int64_t)0x0000000000100000)
#define __WTCIPHER_64_OPR22(x, op) (x op (int64_t)0x0000000000200000)
#define __WTCIPHER_64_OPR23(x, op) (x op (int64_t)0x0000000000400000)
#define __WTCIPHER_64_OPR24(x, op) (x op (int64_t)0x0000000000800000)
#define __WTCIPHER_64_OPR25(x, op) (x op (int64_t)0x0000000001000000)
#define __WTCIPHER_64_OPR26(x, op) (x op (int64_t)0x0000000002000000)
#define __WTCIPHER_64_OPR27(x, op) (x op (int64_t)0x0000000004000000)
#define __WTCIPHER_64_OPR28(x, op) (x op (int64_t)0x0000000008000000)
#define __WTCIPHER_64_OPR29(x, op) (x op (int64_t)0x0000000010000000)
#define __WTCIPHER_64_OPR30(x, op) (x op (int64_t)0x0000000020000000)
#define __WTCIPHER_64_OPR31(x, op) (x op (int64_t)0x0000000040000000)
#define __WTCIPHER_64_OPR32(x, op) (x op (int64_t)0x0000000080000000)
#define __WTCIPHER_64_OPR33(x, op) (x op (int64_t)0x0000000100000000)
#define __WTCIPHER_64_OPR34(x, op) (x op (int64_t)0x0000000200000000)
#define __WTCIPHER_64_OPR35(x, op) (x op (int64_t)0x0000000400000000)
#define __WTCIPHER_64_OPR36(x, op) (x op (int64_t)0x0000000800000000)
#define __WTCIPHER_64_OPR37(x, op) (x op (int64_t)0x0000001000000000)
#define __WTCIPHER_64_OPR38(x, op) (x op (int64_t)0x0000002000000000)
#define __WTCIPHER_64_OPR39(x, op) (x op (int64_t)0x0000004000000000)
#define __WTCIPHER_64_OPR40(x, op) (x op (int64_t)0x0000008000000000)
#define __WTCIPHER_64_OPR41(x, op) (x op (int64_t)0x0000010000000000)
#define __WTCIPHER_64_OPR42(x, op) (x op (int64_t)0x0000020000000000)
#define __WTCIPHER_64_OPR43(x, op) (x op (int64_t)0x0000040000000000)
#define __WTCIPHER_64_OPR44(x, op) (x op (int64_t)0x0000080000000000)
#define __WTCIPHER_64_OPR45(x, op) (x op (int64_t)0x0000100000000000)
#define __WTCIPHER_64_OPR46(x, op) (x op (int64_t)0x0000200000000000)
#define __WTCIPHER_64_OPR47(x, op) (x op (int64_t)0x0000400000000000)
#define __WTCIPHER_64_OPR48(x, op) (x op (int64_t)0x0000800000000000)
#define __WTCIPHER_64_OPR49(x, op) (x op (int64_t)0x0001000000000000)
#define __WTCIPHER_64_OPR50(x, op) (x op (int64_t)0x0002000000000000)
#define __WTCIPHER_64_OPR51(x, op) (x op (int64_t)0x0004000000000000)
#define __WTCIPHER_64_OPR52(x, op) (x op (int64_t)0x0008000000000000)
#define __WTCIPHER_64_OPR53(x, op) (x op (int64_t)0x0010000000000000)
#define __WTCIPHER_64_OPR54(x, op) (x op (int64_t)0x0020000000000000)
#define __WTCIPHER_64_OPR55(x, op) (x op (int64_t)0x0040000000000000)
#define __WTCIPHER_64_OPR56(x, op) (x op (int64_t)0x0080000000000000)
#define __WTCIPHER_64_OPR57(x, op) (x op (int64_t)0x0100000000000000)
#define __WTCIPHER_64_OPR58(x, op) (x op (int64_t)0x0200000000000000)
#define __WTCIPHER_64_OPR59(x, op) (x op (int64_t)0x0400000000000000)
#define __WTCIPHER_64_OPR60(x, op) (x op (int64_t)0x0800000000000000)
#define __WTCIPHER_64_OPR61(x, op) (x op (int64_t)0x1000000000000000)
#define __WTCIPHER_64_OPR62(x, op) (x op (int64_t)0x2000000000000000)
#define __WTCIPHER_64_OPR63(x, op) (x op (int64_t)0x4000000000000000)
#define __WTCIPHER_64_OPR64(x, op) (x op (int64_t)0x8000000000000000)
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
#define WTCIPHER_32_BIT(b, x) __WTCIPHER_32_OPR##b(x, &)
#define WTCIPHER_32_SET(b, x) __WTCIPHER_32_OPR##b(x, |=)
#define WTCIPHER_32_CHG(b, x) __WTCIPHER_32_OPR##b(x, ^=)
#define WTCIPHER_32_CLR(b, x) __WTCIPHER_32_OPR##b(x, &=~)

#define WTCIPHER_64_LO(x) (x & (int64_t)0x00000000FFFFFFFF)
#define WTCIPHER_64_HI(x) ((x & (int64_t)0xFFFFFFFF00000000) >> 32)
#define WTCIPHER_64_BIT(b, x) __WTCIPHER_64_OPR##b(x, &)
#define WTCIPHER_64_SET(b, x) __WTCIPHER_64_OPR##b(x, |=)
#define WTCIPHER_64_CHG(b, x) __WTCIPHER_64_OPR##b(x, ^=)
#define WTCIPHER_64_CLR(b, x) __WTCIPHER_64_OPR##b(x, &=~)
#pragma endregion
#pragma region
/// @brief Reverse specific bits.
/// @param _In The input.
/// @param _Key 4-bit key(, lower half byte).
/// @return Reversed bits.
int8_t wtcipher_rev8(int8_t _In, int8_t _Key);
/// @brief Add a cover.
/// @param _In The input.
/// @param _Key 8-bit key.
/// @return Covered bits.
int8_t wtcipher_cover8(int8_t _In, int8_t _Key);
/// @brief Add a cover.
/// @param _In The input.
/// @param _Key 16-bit key.
/// @return Covered bits.
int16_t wtcipher_cover16(int16_t _In, int16_t _Key);
/// @brief Add a cover.
/// @param _In The input.
/// @param _Key 32-bit key.
/// @return Covered bits.
int32_t wtcipher_cover32(int32_t _In, int32_t _Key);
/// @brief Add a cover.
/// @param _In The input.
/// @param _Key 64-bit key.
/// @return Covered bits.
int64_t wtcipher_cover64(int64_t _In, int64_t _Key);
/// @brief Put 16 bits mixed together.
/// @param _In The first input in a 2-element 8-bit array.
/// @param _Key 8-bit key.
/// @return The combined 16 bits.
int16_t wtcipher_8to16(int8_t* _In, int8_t _Key);
/// @brief Put 16 bits reordered.
/// @param _In The input.
/// @param _Key 8-bit key.
/// @return The reordered 16 bits.
int16_t wtcipher_16to8(int16_t _In, int8_t _Key);
#pragma endregion
#pragma region
#ifdef WTCIPHER_CLEAN
#undef __WTCIPHER_8_OPR1
#undef __WTCIPHER_8_OPR2
#undef __WTCIPHER_8_OPR3
#undef __WTCIPHER_8_OPR4
#undef __WTCIPHER_8_OPR5
#undef __WTCIPHER_8_OPR6
#undef __WTCIPHER_8_OPR7
#undef __WTCIPHER_8_OPR8
#undef __WTCIPHER_16_OPR1
#undef __WTCIPHER_16_OPR2
#undef __WTCIPHER_16_OPR3
#undef __WTCIPHER_16_OPR4
#undef __WTCIPHER_16_OPR5
#undef __WTCIPHER_16_OPR6
#undef __WTCIPHER_16_OPR7
#undef __WTCIPHER_16_OPR8
#undef __WTCIPHER_16_OPR9
#undef __WTCIPHER_16_OPR10
#undef __WTCIPHER_16_OPR11
#undef __WTCIPHER_16_OPR12
#undef __WTCIPHER_16_OPR13
#undef __WTCIPHER_16_OPR14
#undef __WTCIPHER_16_OPR15
#undef __WTCIPHER_16_OPR16
#undef __WTCIPHER_32_OPR1
#undef __WTCIPHER_32_OPR1
#undef __WTCIPHER_32_OPR2
#undef __WTCIPHER_32_OPR3
#undef __WTCIPHER_32_OPR4
#undef __WTCIPHER_32_OPR5
#undef __WTCIPHER_32_OPR6
#undef __WTCIPHER_32_OPR7
#undef __WTCIPHER_32_OPR8
#undef __WTCIPHER_32_OPR9
#undef __WTCIPHER_32_OPR10
#undef __WTCIPHER_32_OPR11
#undef __WTCIPHER_32_OPR12
#undef __WTCIPHER_32_OPR13
#undef __WTCIPHER_32_OPR14
#undef __WTCIPHER_32_OPR15
#undef __WTCIPHER_32_OPR16
#undef __WTCIPHER_32_OPR17
#undef __WTCIPHER_32_OPR18
#undef __WTCIPHER_32_OPR19
#undef __WTCIPHER_32_OPR20
#undef __WTCIPHER_32_OPR21
#undef __WTCIPHER_32_OPR22
#undef __WTCIPHER_32_OPR23
#undef __WTCIPHER_32_OPR24
#undef __WTCIPHER_32_OPR25
#undef __WTCIPHER_32_OPR26
#undef __WTCIPHER_32_OPR27
#undef __WTCIPHER_32_OPR28
#undef __WTCIPHER_32_OPR29
#undef __WTCIPHER_32_OPR30
#undef __WTCIPHER_32_OPR31
#undef __WTCIPHER_32_OPR32
#undef __WTCIPHER_64_OPR1
#undef __WTCIPHER_64_OPR2
#undef __WTCIPHER_64_OPR3
#undef __WTCIPHER_64_OPR4
#undef __WTCIPHER_64_OPR5
#undef __WTCIPHER_64_OPR6
#undef __WTCIPHER_64_OPR7
#undef __WTCIPHER_64_OPR8
#undef __WTCIPHER_64_OPR9
#undef __WTCIPHER_64_OPR10
#undef __WTCIPHER_64_OPR11
#undef __WTCIPHER_64_OPR12
#undef __WTCIPHER_64_OPR13
#undef __WTCIPHER_64_OPR14
#undef __WTCIPHER_64_OPR15
#undef __WTCIPHER_64_OPR16
#undef __WTCIPHER_64_OPR17
#undef __WTCIPHER_64_OPR18
#undef __WTCIPHER_64_OPR19
#undef __WTCIPHER_64_OPR20
#undef __WTCIPHER_64_OPR21
#undef __WTCIPHER_64_OPR22
#undef __WTCIPHER_64_OPR23
#undef __WTCIPHER_64_OPR24
#undef __WTCIPHER_64_OPR25
#undef __WTCIPHER_64_OPR26
#undef __WTCIPHER_64_OPR27
#undef __WTCIPHER_64_OPR28
#undef __WTCIPHER_64_OPR29
#undef __WTCIPHER_64_OPR30
#undef __WTCIPHER_64_OPR31
#undef __WTCIPHER_64_OPR32
#undef __WTCIPHER_64_OPR33
#undef __WTCIPHER_64_OPR34
#undef __WTCIPHER_64_OPR35
#undef __WTCIPHER_64_OPR36
#undef __WTCIPHER_64_OPR37
#undef __WTCIPHER_64_OPR38
#undef __WTCIPHER_64_OPR39
#undef __WTCIPHER_64_OPR40
#undef __WTCIPHER_64_OPR41
#undef __WTCIPHER_64_OPR42
#undef __WTCIPHER_64_OPR43
#undef __WTCIPHER_64_OPR44
#undef __WTCIPHER_64_OPR45
#undef __WTCIPHER_64_OPR46
#undef __WTCIPHER_64_OPR47
#undef __WTCIPHER_64_OPR48
#undef __WTCIPHER_64_OPR49
#undef __WTCIPHER_64_OPR50
#undef __WTCIPHER_64_OPR51
#undef __WTCIPHER_64_OPR52
#undef __WTCIPHER_64_OPR53
#undef __WTCIPHER_64_OPR54
#undef __WTCIPHER_64_OPR55
#undef __WTCIPHER_64_OPR56
#undef __WTCIPHER_64_OPR57
#undef __WTCIPHER_64_OPR58
#undef __WTCIPHER_64_OPR59
#undef __WTCIPHER_64_OPR60
#undef __WTCIPHER_64_OPR61
#undef __WTCIPHER_64_OPR62
#undef __WTCIPHER_64_OPR63
#undef __WTCIPHER_64_OPR64
#undef WTCIPHER_8_LO
#undef WTCIPHER_8_HI
#undef WTCIPHER_8_BIT
#undef WTCIPHER_8_SET
#undef WTCIPHER_8_CHG
#undef WTCIPHER_8_CLR
#undef WTCIPHER_16_LO
#undef WTCIPHER_16_HI
#undef WTCIPHER_16_BIT
#undef WTCIPHER_16_SET
#undef WTCIPHER_16_CHG
#undef WTCIPHER_16_CLR
#undef WTCIPHER_32_LO
#undef WTCIPHER_32_HI
#undef WTCIPHER_32_BIT
#undef WTCIPHER_32_SET
#undef WTCIPHER_32_CHG
#undef WTCIPHER_32_CLR
#undef WTCIPHER_64_LO
#undef WTCIPHER_64_HI
#undef WTCIPHER_64_BIT
#undef WTCIPHER_64_SET
#undef WTCIPHER_64_CHG
#undef WTCIPHER_64_CLR
#endif
#pragma endregion