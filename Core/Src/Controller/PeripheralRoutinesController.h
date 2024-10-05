/*
 * PeripheralEventController.h
 *
 *  Created on: Oct 5, 2024
 *      Author: rauls
 */

#ifndef SRC_CONTROLLER_PERIPHERALROUTINESCONTROLLER_H_
#define SRC_CONTROLLER_PERIPHERALROUTINESCONTROLLER_H_

#include <memory>
#include <list>

#include <Model/RoutineModel.h>
#include <Service/PeripheralEventService.h>

namespace controller {

class PeripheralRoutinesController {
public:
	explicit PeripheralRoutinesController(
			 // TODO: Inject interface to abstract the HAL/peripheral(hardware layer)/system calls
			 // TODO: Inject service as interface
			 std::shared_ptr<service::PeripheralEventService> eventService,
			 const std::list<std::shared_ptr<model::RoutineModel>>& routines = {}
	);

	virtual ~PeripheralRoutinesController();

	void registerRoutine(const std::list<std::shared_ptr<model::KeyPressEventModel>>& events, uint32_t reloadTime = 0);
	void registerRoutine(std::shared_ptr<model::RoutineModel> routine);

	void execEvents();
private:
	std::shared_ptr<service::PeripheralEventService> m_eventService;

	std::list<std::shared_ptr<model::RoutineModel> > m_routines;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_PERIPHERALROUTINESCONTROLLER_H_ */
