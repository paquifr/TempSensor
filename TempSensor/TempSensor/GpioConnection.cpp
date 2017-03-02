#include "pch.h"
#include "GpioConnection.h"

GpioConnection::GpioConnection(int32_t pinNumber)
{
	_controller = GpioController::GetDefault();
	if (_controller == nullptr)
		throw std::exception("Failed find any gpio controller on the device");

	_pin = _controller->OpenPin(pinNumber);
	if (_pin == nullptr)
		throw std::exception("Failed to open pin number %d", pinNumber);
}
