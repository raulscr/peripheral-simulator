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

#include "Model/EventInterfaceModel.h"

namespace service {

class PeripheralEventService {
public:
	PeripheralEventService();
	explicit PeripheralEventService(std::list<std::shared_ptr<model::EventInterfaceModel>> events = {});
	virtual ~PeripheralEventService();

	void addEventToList(std::shared_ptr<model::EventInterfaceModel> event);
	void setEventList(std::list<std::shared_ptr<model::EventInterfaceModel>> events);

	void execEvents();
private:
	std::list<std::shared_ptr<model::EventInterfaceModel>> m_eventList;
};

} /* namespace service */

#endif /* SRC_SERVICE_PERIPHERALEVENTSERVICE_H_ */
