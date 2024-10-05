/*
 * KeyPressEventModel.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include <Model/KeyPressEventModel.h>

namespace model {

KeyPressEventModel::KeyPressEventModel(KeyModelEnum key, uint32_t posDelay_ms, uint32_t preDelay_ms) :
		m_preDelay_ms(preDelay_ms),
		m_posDelay_ms(posDelay_ms),
		m_key(key)
{
}

KeyPressEventModel::KeyPressEventModel(char key, uint32_t posDelay_ms, uint32_t preDelay_ms) :
		KeyPressEventModel(charToKeyModelEnum(key), posDelay_ms, preDelay_ms)
{
}

KeyPressEventModel::~KeyPressEventModel()
{
	// TODO Auto-generated destructor stub
}

KeyModelEnum KeyPressEventModel::charToKeyModelEnum(char c) const
{
    switch(c) {
		case 'A': case 'a': return KeyModelEnum::Keyboard_A;
		case 'B': case 'b': return KeyModelEnum::Keyboard_B;
		case 'C': case 'c': return KeyModelEnum::Keyboard_C;
		case 'D': case 'd': return KeyModelEnum::Keyboard_D;
		case 'E': case 'e': return KeyModelEnum::Keyboard_E;
		case 'F': case 'f': return KeyModelEnum::Keyboard_F;
		case 'G': case 'g': return KeyModelEnum::Keyboard_G;
		case 'H': case 'h': return KeyModelEnum::Keyboard_H;
		case 'I': case 'i': return KeyModelEnum::Keyboard_I;
		case 'J': case 'j': return KeyModelEnum::Keyboard_J;
		case 'K': case 'k': return KeyModelEnum::Keyboard_K;
		case 'L': case 'l': return KeyModelEnum::Keyboard_L;
		case 'M': case 'm': return KeyModelEnum::Keyboard_M;
		case 'N': case 'n': return KeyModelEnum::Keyboard_N;
		case 'O': case 'o': return KeyModelEnum::Keyboard_O;
		case 'P': case 'p': return KeyModelEnum::Keyboard_P;
		case 'Q': case 'q': return KeyModelEnum::Keyboard_Q;
		case 'R': case 'r': return KeyModelEnum::Keyboard_R;
		case 'S': case 's': return KeyModelEnum::Keyboard_S;
		case 'T': case 't': return KeyModelEnum::Keyboard_T;
		case 'U': case 'u': return KeyModelEnum::Keyboard_U;
		case 'V': case 'v': return KeyModelEnum::Keyboard_V;
		case 'W': case 'w': return KeyModelEnum::Keyboard_W;
		case 'X': case 'x': return KeyModelEnum::Keyboard_X;
		case 'Y': case 'y': return KeyModelEnum::Keyboard_Y;
		case 'Z': case 'z': return KeyModelEnum::Keyboard_Z;
        case '1': return KeyModelEnum::Keyboard_1;
        case '2': return KeyModelEnum::Keyboard_2;
        case '3': return KeyModelEnum::Keyboard_3;
        case '4': return KeyModelEnum::Keyboard_4;
        case '5': return KeyModelEnum::Keyboard_5;
        case '6': return KeyModelEnum::Keyboard_6;
        case '7': return KeyModelEnum::Keyboard_7;
        case '8': return KeyModelEnum::Keyboard_8;
        case '9': return KeyModelEnum::Keyboard_9;
        case ',': return KeyModelEnum::Keyboard_Comma;
        case '.': return KeyModelEnum::Keyboard_Period;
        case '\n': return KeyModelEnum::Keyboard_Enter; // Enter
        case '\b': return KeyModelEnum::Keyboard_Backspace; // Backspace
        case '\t': return KeyModelEnum::Keyboard_Tab; // Tab
        case ' ': return KeyModelEnum::Keyboard_Space;  // Space
        case '-': return KeyModelEnum::Keyboard_Minus;
        case '=': return KeyModelEnum::Keyboard_Equal;
        case '[': return KeyModelEnum::Keyboard_LeftBracket;  // Left Bracket
        case ']': return KeyModelEnum::Keyboard_RightBracket;  // Right Bracket
        case '\\': return KeyModelEnum::Keyboard_Backslash; // Backslash
        case ';': return KeyModelEnum::Keyboard_Semicolon;
        case '\'': return KeyModelEnum::Keyboard_Quote; // Quote
        case '`': return KeyModelEnum::Keyboard_GraveAccent;  // Grave Accent
        case '/': return KeyModelEnum::Keyboard_Slash;
        case '_': return KeyModelEnum::Keyboard_Underscore; // Caps Lock
        case '!': return KeyModelEnum::Keyboard_ExclamationMark; // Exclamation mark (assuming shifted 1)
        case '@': return KeyModelEnum::Keyboard_AtSymbol; // At symbol (assuming shifted 2)
        case '#': return KeyModelEnum::Keyboard_HashSymbol; // Hash symbol (assuming shifted 3)
        case '$': return KeyModelEnum::Keyboard_DollarSymbol;
        case '%': return KeyModelEnum::Keyboard_PercentSymbol;
        case '^': return KeyModelEnum::Keyboard_CaretSymbol;
        case '&': return KeyModelEnum::Keyboard_AmpersandSymbol;
        case '*': return KeyModelEnum::Keyboard_AsteriskSymbol;
        case '(': return KeyModelEnum::Keyboard_LeftParenthesisSymbol;
        case ')': return KeyModelEnum::Keyboard_RightParenthesisSymbol; // Dollar symbol (assuming shifted 4)
        default: return KeyModelEnum::Reserved; // Valor padrão para caractere não mapeado
    }
}

KeyModelEnum KeyPressEventModel::getKey() const {
	return m_key;
}

void KeyPressEventModel::setKey(KeyModelEnum key) {
	m_key = key;
}

uint32_t KeyPressEventModel::getPosDelayMs() const {
	return m_posDelay_ms;
}

void KeyPressEventModel::setPosDelayMs(uint32_t posDelayMs) {
	m_posDelay_ms = posDelayMs;
}

uint32_t KeyPressEventModel::getPreDelayMs() const {
	return m_preDelay_ms;
}

void KeyPressEventModel::setPreDelayMs(uint32_t preDelayMs) {
	m_preDelay_ms = preDelayMs;
}

} /* namespace model */
