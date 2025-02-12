/*
 * PeripheralEventService.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_SERVICE_PERIPHERALEVENTSERVICE_H_
#define SRC_SERVICE_PERIPHERALEVENTSERVICE_H_

#include <memory>
#include <list>

#include "Model/Keyboard/KeyPressEventModel.h"

namespace service {

class PeripheralEventService {
public:
	explicit PeripheralEventService(const std::list<std::shared_ptr<model::EventModelInterface>>& events = {});
	explicit PeripheralEventService(const PeripheralEventService& other);
	virtual ~PeripheralEventService();

	PeripheralEventService& operator=(const PeripheralEventService& other);

	void addEventToList(std::shared_ptr<model::EventModelInterface> event);
	void setEventList(const std::list<std::shared_ptr<model::EventModelInterface>>& events);

	void execEvents();
	void execEvents(const std::list<std::shared_ptr<model::EventModelInterface>>& events);
private:
	void execEvent(const std::shared_ptr<model::EventModelInterface>& event);

	std::list<std::shared_ptr<model::EventModelInterface>> m_eventList;
};

} /* namespace service */

#endif /* SRC_SERVICE_PERIPHERALEVENTSERVICE_H_ */
