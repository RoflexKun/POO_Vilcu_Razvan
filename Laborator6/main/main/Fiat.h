#pragma once
#include "Cars.h"

class Fiat : public Cars
{
public:
	Fiat()
	{
		name = "Fiat";
		speed = 30;
		fuel_capacity = 100;
		fuel_consumption = 2;
	}
	void RainC()
	{
		fuel_consumption--;
		speed -= 10;
	}
	void SunnyC()
	{
		fuel_consumption++;
		speed += 10;
	}
	void SnowyC()
	{
		fuel_consumption -= 3;
		speed -= 30;
	}
}; 
