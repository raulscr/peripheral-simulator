/*
 * PeripheralEventService.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include <Service/PeripheralEventService.h>

namespace service {

PeripheralEventService::PeripheralEventService() :
		m_eventList({})
{

}

PeripheralEventService::PeripheralEventService(
		std::list<std::shared_ptr<model::EventInterfaceModel>> events) :
		m_eventList(events)
{

}

PeripheralEventService::~PeripheralEventService()
{
	// TODO Auto-generated destructor stub
}

void PeripheralEventService::addEventToList(std::shared_ptr<model::EventInterfaceModel> event)
{
	m_eventList.push_back(event);
}

void PeripheralEventService::setEventList(std::list<std::shared_ptr<model::EventInterfaceModel>> events)
{
	m_eventList = events;
}

void PeripheralEventService::execEvents()
{
	for (auto event: m_eventList)
	{
		event->execEvent();
	}
}

} /* namespace service */
