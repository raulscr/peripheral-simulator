/*
 * KeyboardOutputImpl.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef PERIPHERAL_KEYBOARDOUTPUTIMPL_H_
#define PERIPHERAL_KEYBOARDOUTPUTIMPL_H_

#include <memory>

#include "Model/EventModelInterface.h"

namespace peripheral {

class KeyboardOutputImpl {
public:
	static std::shared_ptr<KeyboardOutputImpl> getInstance();

	virtual ~KeyboardOutputImpl();
	KeyboardOutputImpl(const KeyboardOutputImpl &other) = delete;
	KeyboardOutputImpl(KeyboardOutputImpl &&other) = delete;
	KeyboardOutputImpl& operator=(const KeyboardOutputImpl &other) = delete;
	KeyboardOutputImpl& operator=(KeyboardOutputImpl &&other) = delete;

	void generateEvent(const std::shared_ptr<model::EventModelInterface>& event);
private:
	KeyboardOutputImpl();
};

} /* namespace peripheral */

#endif /* PERIPHERAL_KEYBOARDOUTPUTIMPL_H_ */
