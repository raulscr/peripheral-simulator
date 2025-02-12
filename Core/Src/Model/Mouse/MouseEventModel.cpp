/*
 * MouseEventModel.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include <Model/Mouse/MouseEventModel.h>

namespace model {

MouseEventModel::MouseEventModel(MouseButtonEnum button, uint32_t posDelay_ms, uint32_t preDelay_ms) :
		m_mouseMessage({(int8_t)button, 0, 0, 0}),
		m_mouseMessageRelease({0, 0, 0, 0}),
		m_preDelay_ms(preDelay_ms),
		m_posDelay_ms(posDelay_ms)
{
}

MouseEventModel::MouseEventModel(int8_t move_x, int8_t move_y, uint32_t posDelay_ms, uint32_t preDelay_ms) :
		m_mouseMessage({0, move_x, move_y, 0}),
		m_mouseMessageRelease({0, 0, 0, 0}),
		m_preDelay_ms(preDelay_ms),
		m_posDelay_ms(posDelay_ms)
{
}

MouseEventModel::~MouseEventModel()
{
	// TODO Auto-generated destructor stub
}

uint32_t MouseEventModel::getPosDelayMs() const {
	return m_posDelay_ms;
}

void MouseEventModel::setPosDelayMs(uint32_t posDelayMs) {
	m_posDelay_ms = posDelayMs;
}

uint32_t MouseEventModel::getPreDelayMs() const {
	return m_preDelay_ms;
}

void MouseEventModel::setPreDelayMs(uint32_t preDelayMs) {
	m_preDelay_ms = preDelayMs;
}


uint8_t* MouseEventModel::bytes() const {
	// TODO: fix cast to C++ cast
	return (uint8_t*)(&m_mouseMessage);
}

uint8_t* MouseEventModel::bytesRelease() const {
	// TODO: fix cast to C++ cast
	return (uint8_t*)&m_mouseMessageRelease;
}

uint32_t MouseEventModel::byteSize() const {
	const static uint32_t size = sizeof(MouseHID);
	return size;
}

uint32_t MouseEventModel::duration() const {
	return 50;
}

} /* namespace model */
