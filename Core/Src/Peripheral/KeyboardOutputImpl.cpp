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

KeyboardOutputImpl::KeyboardOutputImpl() :
		m_keyboardMessage({0, 0, 0, 0, 0, 0, 0, 0})
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

void KeyboardOutputImpl::tapKey(uint8_t key, uint32_t time){
	m_keyboardMessage.KeyCode1 = static_cast<uint8_t>(key);
	USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t*)(&m_keyboardMessage), sizeof(KeyboardHID));
	HAL_Delay(time);
	m_keyboardMessage.KeyCode1 = 0;
	USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t*)(&m_keyboardMessage), sizeof(KeyboardHID));
}

} /* namespace peripheral */
