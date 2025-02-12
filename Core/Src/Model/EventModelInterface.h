/*
 * EventModelInterface.h
 *
 *  Created on: Feb 11, 2025
 *      Author: rauls
 */

#ifndef SRC_MODEL_EVENTMODELINTERFACE_H_
#define SRC_MODEL_EVENTMODELINTERFACE_H_

namespace model {

class EventModelInterface {
public:
	virtual uint8_t* bytes() const = 0;
	virtual uint8_t* bytesRelease() const = 0;
	virtual uint32_t byteSize() const = 0;
	virtual uint32_t duration() const = 0;
	virtual uint32_t getPosDelayMs() const = 0;
	virtual uint32_t getPreDelayMs() const = 0;
};

} /* namespace model */

#endif /* SRC_MODEL_EVENTMODELINTERFACE_H_ */
