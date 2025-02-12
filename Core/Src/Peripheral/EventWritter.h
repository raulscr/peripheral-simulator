/*
 * EventWritter.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef PERIPHERAL_KEYBOARDOUTPUTIMPL_H_
#define PERIPHERAL_KEYBOARDOUTPUTIMPL_H_

#include <memory>

#include "Model/EventModelInterface.h"

namespace peripheral {

class EventWritter {
public:
	static std::shared_ptr<EventWritter> getInstance();

	virtual ~EventWritter();
	EventWritter(const EventWritter &other) = delete;
	EventWritter(EventWritter &&other) = delete;
	EventWritter& operator=(const EventWritter &other) = delete;
	EventWritter& operator=(EventWritter &&other) = delete;

	void writeEvent(const std::shared_ptr<model::EventModelInterface>& event);
private:
	EventWritter();
};

} /* namespace peripheral */

#endif /* PERIPHERAL_KEYBOARDOUTPUTIMPL_H_ */
