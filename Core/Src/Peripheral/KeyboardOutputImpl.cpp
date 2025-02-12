/*
 * KeyboardOutputImpl.cpp
 *
 *  Created on: Jul 21, 2024
 *      Author: rauls
 */

#include <Peripheral/KeyboardOutputImpl.h>
#include "usb_device.h"
#include "usbd_hid.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

namespace peripheral {

KeyboardOutputImpl::~KeyboardOutputImpl()
{
	// TODO Auto-generated destructor stub
}

KeyboardOutputImpl::KeyboardOutputImpl()
{
	MX_USB_DEVICE_Init();
}

std::shared_ptr<KeyboardOutputImpl> KeyboardOutputImpl::getInstance(){
	static std::shared_ptr<KeyboardOutputImpl> _instance = nullptr;
	if ( _instance == nullptr )
	{
		_instance.reset(new KeyboardOutputImpl());
	}

	return _instance;
}

void KeyboardOutputImpl::generateEvent(const std::shared_ptr<model::EventModelInterface>& event){
	USBD_HID_SendReport(&hUsbDeviceFS, event->bytes(), event->byteSize());

	if ( event->duration() > 0 )
	{
		HAL_Delay(event->duration());
		USBD_HID_SendReport(&hUsbDeviceFS, event->bytesRelease(), event->byteSize());
	}
}

} /* namespace peripheral */
