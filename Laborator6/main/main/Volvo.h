#pragma once
#include "Cars.h"
class Volvo : public Cars
{
public:
	Volvo()
	{
		name = "Volvo";
		speed = 120;
		fuel_capacity = 40;
		fuel_consumption = 8;
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