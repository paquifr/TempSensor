#pragma once
#include "pch.h"

using namespace Windows::Devices::Gpio;

class GpioConnection
{
	public:
		GpioConnection(int32_t pinNumber);

	private:
		GpioPin^ _pin = nullptr;
		GpioController^_controller = nullptr;
};