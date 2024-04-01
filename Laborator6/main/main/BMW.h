#pragma once
#include "Cars.h"
class BMW : public Cars
{
public:
	BMW()
	{
		name = "BMW";
		speed = 150;
		fuel_capacity = 10;
		fuel_consumption = 15;
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