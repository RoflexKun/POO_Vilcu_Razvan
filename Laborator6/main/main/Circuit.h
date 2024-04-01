#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
#include "Weather.h"
#include "Cars.h"
#include "Volvo.h"
#include "BMW.h"
#include "Seat.h"
#include "Fiat.h"
#include "RangeRover.h"

using namespace std;

bool avgSpeed(Cars* masina_1, Cars* masina_2)
{
	return (masina_1->speed < masina_2->speed);
}

class Circuit
{
public:
	int length = 0;
	Weather weather;
	vector<Cars*>x;

	void SetLength(int a)
	{
		length = a;
	}
	void SetWeather(Weather vreme)
	{
		weather = vreme;
	}
	void AddCar(Cars* masina)
	{
		switch (weather)
		{
		case Rain:
			masina->RainC();
			break;
		case Sunny:
			masina->SunnyC();
			break;
		case Snowy:
			masina->SnowyC();
			break;
		}
		x.push_back(masina);
	}

	void Race()
	{
		sort(x.begin(), x.end(), avgSpeed);
		int size = x.size();
		for (int i = 0; i < size; i++)
		{
			if ((x[i]->fuel_capacity / x[i]->fuel_consumption) * 100 < length)
			{
				auto temp = x[i];
				x.erase(x.begin() + i);
				x.push_back(temp);
				i--;
				size--;
			}
		}
	}
	void ShowFinalRanks()
	{
		for (auto i : x)
		{
			if ((i->fuel_capacity / i->fuel_consumption) * 100 >= length)
				cout << i->name << " a terminat in " << (double)length / i->speed << '\n';
		}
	}
	void ShowWhoDidNotFinish()
	{
		for (auto i : x)
		{
			if ((i->fuel_capacity / i->fuel_consumption) * 100 < length)
				cout << i->name << " DNF"  << '\n';
		}

	}
};