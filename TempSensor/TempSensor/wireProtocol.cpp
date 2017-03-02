#include "pch.h"
#include "wireProtocol.h"
#include <Windows.h>

#pragma region Initializers

wireProtocol::wireProtocol(GpioPin^ pin)
{
	_pin = pin;
	if (_pin == nullptr)
		throw std::exception("Failed to pass the pin to the wireProtocol.");

	getPCFrequency();
}

#pragma endregion

#pragma region Public

void wireProtocol::launch()
{
}

void wireProtocol::stop()
{
}

#pragma endregion

#pragma region Private

void wireProtocol::sendStartSignal()
{
	// Set the pin to low for 1ms
	
	// To-Do, set pin state to low here.

	LARGE_INTEGER startTime, endTime;
	QueryPerformanceCounter(&startTime);
	do
	{
		QueryPerformanceCounter(&endTime);
	}
	while ( (endTime.QuadPart-startTime.QuadPart)/_pcFrequency < 1000 );

	// To-Do, put it back to high state;
}
void wireProtocol::getResponse()
{	
}

void wireProtocol::getPCFrequency()
{
	LARGE_INTEGER li;
	if (!QueryPerformanceFrequency(&li)) 
	{
		throw std::exception("Failed to get the counter frequency.");
		return;
	}
	_pcFrequency = double(li.QuadPart) / 1000000.0;
}

#pragma endregion

