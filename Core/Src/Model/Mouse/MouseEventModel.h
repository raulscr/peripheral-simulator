/*
 * MouseEventModel.h
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#ifndef SRC_MODEL_MOUSEEVENTMODEL_H_
#define SRC_MODEL_MOUSEEVENTMODEL_H_

#include <stdint.h>

#include "Model/Mouse/MouseButtonEnum.h"
#include "Model/EventModelInterface.h"

namespace model {

class MouseEventModel : public EventModelInterface {
public:
	MouseEventModel(MouseButtonEnum button, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	MouseEventModel(MouseButtonEnum button, int8_t move_x, int8_t move_y, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	MouseEventModel(int8_t move_x, int8_t move_y, uint32_t posDelay_ms, uint32_t preDelay_ms = 0);
	virtual ~MouseEventModel();

	void setPreDelayMs(uint32_t preDelayMs);
	void setPosDelayMs(uint32_t posDelayMs);

// inherit methods
	uint8_t* bytes() const;
	uint8_t* bytesRelease() const;
	uint32_t byteSize() const;
	uint32_t duration() const;
	uint32_t getPosDelayMs() const;
	uint32_t getPreDelayMs() const;

private:

	// this struct might not need to be here... Along with the interface
	// move it to another keyboardEventClass that will only
	// parse this class to the keyboard bytes object
	typedef struct {
		int8_t deviceId;
	    int8_t buttons;
	    int8_t x;
	    int8_t y;
	    int8_t wheel;
	} MouseHID;
	MouseHID m_mouseMessage;
	MouseHID m_mouseMessageRelease;

	uint32_t m_preDelay_ms;
	uint32_t m_posDelay_ms;
};

} /* namespace model */

#endif /* SRC_MODEL_MOUSEEVENTMODEL_H_ */
