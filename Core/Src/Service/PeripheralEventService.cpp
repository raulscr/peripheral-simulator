/*
 * PeripheralEventService.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include "stm32f1xx_hal.h"

#include <Service/PeripheralEventService.h>
#include <Peripheral/KeyboardOutputImpl.h>

using peripheral::KeyboardOutputImpl;

namespace service {

PeripheralEventService::PeripheralEventService(const std::list<std::shared_ptr<model::EventModelInterface>>& events) :
		m_eventList(events)
{

}

PeripheralEventService::~PeripheralEventService()
{
	// TODO Auto-generated destructor stub
}

void PeripheralEventService::addEventToList(std::shared_ptr<model::EventModelInterface> event)
{
	m_eventList.push_back(event);
}

void PeripheralEventService::setEventList(const std::list<std::shared_ptr<model::EventModelInterface>>& events)
{
	m_eventList = events;
}

void PeripheralEventService::execEvent(const std::shared_ptr<model::EventModelInterface>& event)
{
	HAL_Delay(event->getPreDelayMs());
	KeyboardOutputImpl::getInstance()->generateEvent(event);
	HAL_Delay(event->getPosDelayMs());
}

void PeripheralEventService::execEvents()
{
	for (auto event: m_eventList)
	{
		execEvent(event);
	}
}

void PeripheralEventService::execEvents(const std::list<std::shared_ptr<model::EventModelInterface> >& events) {
	setEventList(events);
	execEvents();
}

PeripheralEventService& PeripheralEventService::operator=(const PeripheralEventService& other) {
	this->m_eventList = other.m_eventList;
	return *this;
}

PeripheralEventService::PeripheralEventService(const PeripheralEventService &other) {
	*this = other;
}

} /* namespace service */
