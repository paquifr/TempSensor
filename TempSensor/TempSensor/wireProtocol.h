#pragma once
#include "pch.h"
#include "GpioConnection.h"

using namespace Windows::Devices::Gpio;

class wireProtocol
{
	public:
		// wireProtocol(GPIOConnection& connection);
		wireProtocol(GpioPin^ pin);

		/// <summary>
		/// Launch the data acquisition from the DHT11 chip.
		/// </summary>
		void launch();
		
		/// <summary>
		/// Stop the data acquisition from the DHT11 chip.
		/// </summary>
		void stop();

 	private:
		void sendStartSignal();
		void getResponse();
		void getPCFrequency();
		GpioPin^ _pin = nullptr;
		double _pcFrequency = 0.0f;

};