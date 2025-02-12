/*
 * EventWritter.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include <Peripheral/EventWritter.h>
#include "usb_device.h"
#include "usbd_hid.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

namespace peripheral {

EventWritter::~EventWritter()
{
	// TODO Auto-generated destructor stub
}

EventWritter::EventWritter()
{
	MX_USB_DEVICE_Init();
}

std::shared_ptr<EventWritter> EventWritter::getInstance(){
	static std::shared_ptr<EventWritter> _instance = nullptr;
	if ( _instance == nullptr )
	{
		_instance.reset(new EventWritter());
	}

	return _instance;
}

void EventWritter::writeEvent(const std::shared_ptr<model::EventModelInterface>& event){
	USBD_HID_SendReport(&hUsbDeviceFS, event->bytes(), event->byteSize());

	if ( event->duration() > 0 )
	{
		HAL_Delay(event->duration());
		USBD_HID_SendReport(&hUsbDeviceFS, event->bytesRelease(), event->byteSize());
	}
}

} /* namespace peripheral */
