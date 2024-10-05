/*
 * KeyPressEventModel.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_KEYPRESSEVENTMODEL_H_
#define SRC_MODEL_KEYPRESSEVENTMODEL_H_

#include <stdint.h>

#include "Model/KeyModelEnum.h"

namespace model {

class KeyPressEventModel {
public:
	KeyPressEventModel(KeyModelEnum key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	KeyPressEventModel(char key, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	virtual ~KeyPressEventModel();

	KeyModelEnum charToKeyModelEnum(char c) const;

	KeyModelEnum getKey() const;
	void setKey(KeyModelEnum key);

	uint32_t getPosDelayMs() const;
	void setPosDelayMs(uint32_t posDelayMs);

	uint32_t getPreDelayMs() const;
	void setPreDelayMs(uint32_t preDelayMs);

private:
	uint32_t m_preDelay_ms;
	uint32_t m_posDelay_ms;
	KeyModelEnum m_key;
};

} /* namespace model */

#endif /* SRC_MODEL_KEYPRESSEVENTMODEL_H_ */
