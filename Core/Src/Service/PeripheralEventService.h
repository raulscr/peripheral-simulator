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

#include "Model/KeyPressEventModel.h"

namespace service {

class PeripheralEventService {
public:
	explicit PeripheralEventService(const std::list<std::shared_ptr<model::KeyPressEventModel>>& events = {});
	explicit PeripheralEventService(const PeripheralEventService& other);
	virtual ~PeripheralEventService();

	PeripheralEventService& operator=(const PeripheralEventService& other);

	void addEventToList(std::shared_ptr<model::KeyPressEventModel> event);
	void setEventList(const std::list<std::shared_ptr<model::KeyPressEventModel>>& events);

	void execEvents();
	void execEvents(const std::list<std::shared_ptr<model::KeyPressEventModel>>& events);
private:
	void execEvent(std::shared_ptr<model::KeyPressEventModel> event);

	std::list<std::shared_ptr<model::KeyPressEventModel>> m_eventList;
};

} /* namespace service */

#endif /* SRC_SERVICE_PERIPHERALEVENTSERVICE_H_ */
