#pragma once
#include "pch.h"

class wireProtocol
{
	public:
		// wireProtocol(GPIOConnection& connection);
		wireProtocol();

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

};