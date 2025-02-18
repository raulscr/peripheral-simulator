/*
 * MouseButtonEnum.h
 *
 *  Created on: Feb 11, 2025
 *      Author: rauls
 */

#ifndef SRC_MODEL_MOUSE_MOUSEBUTTONENUM_H_
#define SRC_MODEL_MOUSE_MOUSEBUTTONENUM_H_

#include <stdint.h>

namespace model {

enum class MouseButtonEnum : uint8_t {
	NoButton = 0,
	LeftButton = 1,
	RightButton = 2,
	MidButton = 4
};

}

#endif /* SRC_MODEL_MOUSE_MOUSEBUTTONENUM_H_ */
