/*
 * RoutineModel.h
 *
 *  Created on: Oct 5, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_ROUTINEMODEL_H_
#define SRC_MODEL_ROUTINEMODEL_H_

#include <stdint.h>

#include <memory>
#include <list>

#include <Model/KeyPressEventModel.h>

namespace model {

class RoutineModel {
public:
	explicit RoutineModel(const std::list<std::shared_ptr<model::KeyPressEventModel>>& routines = {}, uint32_t reloadTime = 0);
	virtual ~RoutineModel();

	void setReloadTime(uint32_t reloadTime);
	uint32_t getReloadTime() const;

	void setRoutines(const std::list<std::shared_ptr<model::KeyPressEventModel>>& routines);
	std::list<std::shared_ptr<model::KeyPressEventModel>> getRoutines() const;

	uint32_t getLastExecutionTime() const;
	void setLastExecutionTime(uint32_t lastExecutionTime);

private:
	std::list<std::shared_ptr<model::KeyPressEventModel>> m_routines;
	uint32_t m_reloadTime;
	uint32_t m_lastExecutionTime;
};

} /* namespace model */

#endif /* SRC_MODEL_ROUTINEMODEL_H_ */
