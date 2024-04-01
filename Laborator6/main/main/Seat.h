#pragma once
#include "Cars.h"

class Seat : public Cars
{
public:
	Seat()
	{
		name = "Seat";
		speed = 90;
		fuel_capacity = 30;
		fuel_consumption = 5;
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