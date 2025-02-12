/*
 * KeyPressEventModel.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_KEYPRESSEVENTMODEL_H_
#define SRC_MODEL_KEYPRESSEVENTMODEL_H_

#include <stdint.h>

#include "Model/KeyModelEnum.h"
#include "Model/EventModelInterface.h"

namespace model {

class KeyPressEventModel : public EventModelInterface {
public:
	KeyPressEventModel(KeyModelEnum key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	KeyPressEventModel(char key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	virtual ~KeyPressEventModel();

	KeyModelEnum charToKeyModelEnum(char c) const;

	KeyModelEnum getKey() const;
	void setKey(KeyModelEnum key);
	void setPreDelayMs(uint32_t preDelayMs);
	void setPosDelayMs(uint32_t posDelayMs);

// inherit methods
	uint8_t* bytes() const;
	uint8_t* bytesRelease() const;
	uint32_t byteSize() const;
	uint32_t duration() const;
	uint32_t getPosDelayMs() const;
	uint32_t getPreDelayMs() const;

private:

	// this struct might not need to be here... Along with the interface
	// move it to another keyboardEventClass that will only
	// parse this class to the keyboard bytes object
	typedef struct {
		uint8_t Modifier;
		uint8_t Reserved;
		uint8_t KeyCode1;
		uint8_t KeyCode2;
		uint8_t KeyCode3;
		uint8_t KeyCode4;
		uint8_t KeyCode5;
		uint8_t KeyCode6;
	} KeyboardHID;
	KeyboardHID m_keyboardMessage;
	KeyboardHID m_keyboardMessageRelease;

	uint32_t m_preDelay_ms;
	uint32_t m_posDelay_ms;
	KeyModelEnum m_key;
};

} /* namespace model */

#endif /* SRC_MODEL_KEYPRESSEVENTMODEL_H_ */
