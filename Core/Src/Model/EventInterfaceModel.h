/*
 * EventInterfaceModel.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_EVENTINTERFACEMODEL_H_
#define SRC_MODEL_EVENTINTERFACEMODEL_H_

namespace model {

class EventInterfaceModel {
public:
	virtual void execEvent() = 0;
};

} /* namespace model */

#endif /* SRC_MODEL_EVENTINTERFACEMODEL_H_ */
