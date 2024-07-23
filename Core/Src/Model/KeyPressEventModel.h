/*
 * KeyPressEventModel.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_KEYPRESSEVENTMODEL_H_
#define SRC_MODEL_KEYPRESSEVENTMODEL_H_

#include <stdint.h>

#include "stm32f1xx_hal.h"

#include "Model/EventInterfaceModel.h"
#include "Model/KeyModelEnum.h"

namespace model {

class KeyPressEventModel : public EventInterfaceModel {
public:
	KeyPressEventModel(KeyModelEnum key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	KeyPressEventModel(char key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	virtual ~KeyPressEventModel();

	KeyModelEnum charToKeyModelEnum(char c) const;

	void execEvent();
private:
	uint32_t m_preDelay_ms;
	uint32_t m_posDelay_ms;
	KeyModelEnum m_key;
};

} /* namespace model */

#endif /* SRC_MODEL_KEYPRESSEVENTMODEL_H_ */
