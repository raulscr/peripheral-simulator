/*
 * PeripheralEventController.cpp
 *
 *  Created on: Oct 5, 2024
 *      Author: rauls
 */

#include <Controller/PeripheralRoutinesController.h>

#include "stm32f1xx_hal.h"

namespace controller {

PeripheralRoutinesController::PeripheralRoutinesController(
		 std::shared_ptr<service::PeripheralEventService> eventService,
		 const std::list<std::shared_ptr<model::RoutineModel>>& routines) :
	m_eventService(eventService),
	m_routines(routines) {
}

PeripheralRoutinesController::~PeripheralRoutinesController() {
	// TODO Auto-generated destructor stub
}

void PeripheralRoutinesController::registerRoutine(std::shared_ptr<model::RoutineModel> routine) {
	m_routines.push_back(routine);
}


void PeripheralRoutinesController::execEvents()
{
	for (std::shared_ptr<model::RoutineModel> routine: m_routines)
	{
		// TODO Use an injected interface to call delay or anything
		uint32_t current_ms = HAL_GetTick();
		if (current_ms - routine->getLastExecutionTime() >= routine->getReloadTime()) {
			m_eventService->execEvents(routine->getRoutines());
			routine->setLastExecutionTime(current_ms);
		}
	}
}

void PeripheralRoutinesController::registerRoutine(
		const std::list<std::shared_ptr<model::KeyPressEventModel> > &events,
		uint32_t reloadTime) {
	m_routines.push_back(std::make_shared<model::RoutineModel>(events, reloadTime));
}

} /* namespace controller */
