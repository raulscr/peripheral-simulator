/*
 * KeyboardOutputImpl.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef PERIPHERAL_KEYBOARDOUTPUTIMPL_H_
#define PERIPHERAL_KEYBOARDOUTPUTIMPL_H_

#include <memory>

namespace peripheral {

class KeyboardOutputImpl final {
public:
	static std::shared_ptr<KeyboardOutputImpl> getInstance();

	virtual ~KeyboardOutputImpl();
	KeyboardOutputImpl(const KeyboardOutputImpl &other) = delete;
	KeyboardOutputImpl(KeyboardOutputImpl &&other) = delete;
	KeyboardOutputImpl& operator=(const KeyboardOutputImpl &other) = delete;
	KeyboardOutputImpl& operator=(KeyboardOutputImpl &&other) = delete;

	void tapKey(uint8_t key, uint32_t time = 50);
private:
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

	KeyboardOutputImpl();
};

} /* namespace peripheral */

#endif /* PERIPHERAL_KEYBOARDOUTPUTIMPL_H_ */
