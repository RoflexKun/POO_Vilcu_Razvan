#include "BMW.h"

void BMW::RainC()
{
	fuel_consumption--;
	speed -= 10;
}
void BMW::SunnyC()
{
	fuel_consumption++;
	speed += 10;
}
void BMW::SnowyC()
{
	fuel_consumption -= 3;
	speed -= 30;
}