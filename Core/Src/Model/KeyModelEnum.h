/*
 * KeyModelEnum.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_KEYMODELENUM_H_
#define SRC_MODEL_KEYMODELENUM_H_

#include <stdint.h>

namespace model{

enum class KeyModelEnum : uint8_t {
    Reserved = 0,
    Keyboard_A = 4,
    Keyboard_B = 5,
    Keyboard_C = 6,
    Keyboard_D = 7,
    Keyboard_E = 8,
    Keyboard_F = 9,
    Keyboard_G = 10,
    Keyboard_H = 11,
    Keyboard_I = 12,
    Keyboard_J = 13,
    Keyboard_K = 14,
    Keyboard_L = 15,
    Keyboard_M = 16,
    Keyboard_N = 17,
    Keyboard_O = 18,
    Keyboard_P = 19,
    Keyboard_Q = 20,
    Keyboard_R = 21,
    Keyboard_S = 22,
    Keyboard_T = 23,
    Keyboard_U = 24,
    Keyboard_V = 25,
    Keyboard_W = 26,
    Keyboard_X = 27,
    Keyboard_Y = 28,
    Keyboard_Z = 29,
    Keyboard_1 = 30,
    Keyboard_2 = 31,
    Keyboard_3 = 32,
    Keyboard_4 = 33,
    Keyboard_5 = 34,
    Keyboard_6 = 35,
    Keyboard_7 = 36,
    Keyboard_8 = 37,
    Keyboard_9 = 38,
    Keyboard_0 = 39,
    Keyboard_Enter = 40,
    Keyboard_Escape = 41,
    Keyboard_Backspace = 42,
    Keyboard_Tab = 43,
    Keyboard_Space = 44,
    Keyboard_Minus = 45,
    Keyboard_Equal = 46,
    Keyboard_LeftBracket = 47,
    Keyboard_RightBracket = 48,
    Keyboard_Backslash = 49,
    Keyboard_Semicolon = 50,
    Keyboard_Quote = 51,
    Keyboard_GraveAccent = 52,
    Keyboard_Comma = 53,
    Keyboard_Period = 54,
    Keyboard_Slash = 55,
    Keyboard_CapsLock = 57,
    Keyboard_F1 = 58,
    Keyboard_F2 = 59,
    Keyboard_F3 = 60,
    Keyboard_F4 = 61,
    Keyboard_F5 = 62,
    Keyboard_F6 = 63,
    Keyboard_F7 = 64,
    Keyboard_F8 = 65,
    Keyboard_F9 = 66,
    Keyboard_F10 = 67,
    Keyboard_F11 = 68,
    Keyboard_F12 = 69,
    Keyboard_PrintScreen = 70,
    Keyboard_ScrollLock = 71,
    Keyboard_Pause = 72,
    Keyboard_Insert = 73,
    Keyboard_Home = 74,
    Keyboard_PageUp = 75,
    Keyboard_DeleteForward = 76,
    Keyboard_End = 77,
    Keyboard_PageDown = 78,
    Keyboard_RightArrow = 79,
    Keyboard_LeftArrow = 80,
    Keyboard_DownArrow = 81,
    Keyboard_UpArrow = 82,
    Keypad_NumLock = 83,
    Keypad_Slash = 84,
    Keypad_Asterisk = 85,
    Keypad_Minus = 86,
    Keypad_Plus = 87,
    Keypad_Enter = 88,
    Keypad_1 = 89,
    Keypad_2 = 90,
    Keypad_3 = 91,
    Keypad_4 = 92,
    Keypad_5 = 93,
    Keypad_6 = 94,
    Keypad_7 = 95,
    Keypad_8 = 96,
    Keypad_9 = 97,
    Keyboard_Underscore = 98,
    Keyboard_ExclamationMark = 89,
	Keyboard_AtSymbol = 90,
	Keyboard_HashSymbol = 91,
	Keyboard_DollarSymbol = 92,
	Keyboard_PercentSymbol = 93,
	Keyboard_CaretSymbol = 94,
	Keyboard_AmpersandSymbol = 95,
	Keyboard_AsteriskSymbol = 96,
	Keyboard_LeftParenthesisSymbol = 97,
	Keyboard_RightParenthesisSymbol = 98,
    Keypad_Period = 99,
    Keyboard_NonUSBackslash = 100,
    Keyboard_Application = 101,
    Keyboard_Power = 102,
    Keypad_Equal = 103,
    Keyboard_F13 = 104,
    Keyboard_F14 = 105,
    Keyboard_F15 = 106,
    Keyboard_F16 = 107,
    Keyboard_F17 = 108,
    Keyboard_F18 = 109,
    Keyboard_F19 = 110,
    Keyboard_F20 = 111,
    Keyboard_F21 = 112,
    Keyboard_F22 = 113,
    Keyboard_F23 = 114,
    Keyboard_F24 = 115,
    Keyboard_Execute = 116,
    Keyboard_Help = 117,
    Keyboard_Menu = 118,
    Keyboard_Select = 119,
    Keyboard_Stop = 120,
    Keyboard_Again = 121,
    Keyboard_Undo = 122,
    Keyboard_Cut = 123,
    Keyboard_Copy = 124,
    Keyboard_Paste = 125,
    Keyboard_Find = 126,
    Keyboard_Mute = 127,
    Keyboard_VolumeUp = 128,
    Keyboard_VolumeDown = 129,
    Keyboard_LockingCapsLock = 130,
    Keyboard_LockingNumLock = 131,
    Keyboard_LockingScrollLock = 132,
    Keypad_Comma = 133,
    Keypad_EqualSign = 134,
    Keyboard_International1 = 135,
    Keyboard_International2 = 136,
    Keyboard_International3 = 137,
    Keyboard_International4 = 138,
    Keyboard_International5 = 139,
    Keyboard_International6 = 140,
    Keyboard_International7 = 141,
    Keyboard_International8 = 142,
    Keyboard_International9 = 143,
    Keyboard_LANG1 = 144,
    Keyboard_LANG2 = 145,
    Keyboard_LANG3 = 146,
    Keyboard_LANG4 = 147,
    Keyboard_LANG5 = 148,
    Keyboard_LANG6 = 149,
    Keyboard_LANG7 = 150,
    Keyboard_LANG8 = 151,
    Keyboard_LANG9 = 152,
    Keyboard_AlternateErase = 153,
    Keyboard_SysReq_Attention = 154,
    Keyboard_Cancel = 155,
    Keyboard_Clear = 156,
    Keyboard_Prior = 157,
    Keyboard_Return = 158,
    Keyboard_Separator = 159,
    Keyboard_Out = 160,
    Keyboard_Oper = 161,
    Keyboard_Clear_Again = 162,
    Keyboard_CrSel_Props = 163,
    Keyboard_ExSel = 164
};

}

#endif /* SRC_MODEL_KEYMODELENUM_H_ */
