#pragma once
#include "Cars.h"

class RangeRover : public Cars
{
public:
	RangeRover()
	{
		name = "RangeRover";
		speed = 180;
		fuel_capacity = 70;
		fuel_consumption = 12;
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
