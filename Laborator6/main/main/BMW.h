#pragma once
#include "Cars.h"
class BMW : public Cars
{
public:
	BMW()
	{
		name = "BMW";
		speed = 150;
		fuel_capacity = 1100;
		fuel_consumption = 15;
	}
	void RainC();
		void SunnyC();
		void SnowyC();
};