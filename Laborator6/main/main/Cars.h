#pragma once
#include <iostream>
#include <string>

using namespace std;
class Cars
{
public:
	string name;
	int speed = 0;
	int fuel_capacity = 0;
	int fuel_consumption = 0;
public:
	void printSpeed();
	virtual void RainC() = 0;
	virtual void SunnyC() = 0;
	virtual void SnowyC() = 0;
};

