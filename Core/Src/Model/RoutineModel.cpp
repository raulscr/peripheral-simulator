/*
 * RoutineModel.cpp
 *
 *  Created on: Oct 5, 2024
 *      Author: rauls
 */

#include <Model/RoutineModel.h>

namespace model {

RoutineModel::RoutineModel(const std::list<std::shared_ptr<model::KeyPressEventModel> > &routines, uint32_t reloadTime) :
	m_routines(routines),
	m_reloadTime(reloadTime){
}

RoutineModel::~RoutineModel() {
	// TODO Auto-generated destructor stub
}

void RoutineModel::setRoutines(const std::list<std::shared_ptr<model::KeyPressEventModel> > &routines) {
	m_routines = routines;
}

std::list<std::shared_ptr<model::KeyPressEventModel> > RoutineModel::getRoutines() const {
	return m_routines;
}

void RoutineModel::setReloadTime(uint32_t reloadTime) {
	m_reloadTime = reloadTime;
}

uint32_t RoutineModel::getReloadTime() const {
	return m_reloadTime;
}

uint32_t RoutineModel::getLastExecutionTime() const {
	return m_lastExecutionTime;
}

void RoutineModel::setLastExecutionTime(uint32_t lastExecutionTime) {
	m_lastExecutionTime = lastExecutionTime;
}

} /* namespace model */
