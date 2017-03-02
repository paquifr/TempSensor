#pragma once
#include "pch.h"
#include <memory.h>
using namespace Windows::Devices::Gpio;

class GpioConnection
{
	public:
		GpioConnection(int32_t pinNumber);
		GpioPin^ getPin();

	private:
		GpioPin^ _pin = nullptr;
		GpioController^_controller = nullptr;
};

inline GpioPin^ GpioConnection::getPin()
{
	return _pin;
}