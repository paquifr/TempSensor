#include "pch.h"
#include "GpioConnection.h"

GpioConnection::GpioConnection(int32_t pinNumber)
{
	_controller = GpioController::GetDefault();
		if (_controller == nullptr)
			throw 1;
	
	
}
