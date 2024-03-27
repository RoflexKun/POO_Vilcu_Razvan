#pragma once
#include <cstring>
#include <iostream>
using namespace std;
class Number
{
	char num[20];
	int n = 10;
public:
	Number(const char* value, int base);// where base is between 2 and 16
	Number operator=(Number value)
	{
		Number temp(value);
		strcpy_s(num, temp.num);
		n = temp.n;
		return temp;
	}
	Number operator=(const char* value)
	{
		Number temp(value, 10);
		strcpy_s(num, temp.num);
		n = 10;
		return temp;
	}
	Number operator=(int value)
	{
		char newNum[20];
		newNum[0] = '\0';
		int cnt = 0;
		while (value != 0)
		{
			char c = value % 10 + '0';
			newNum[cnt++] = c;
			value /= 10;
		}
		newNum[cnt] = '\0';
		char tempC[20];
		tempC[0] = '\0';
		cnt = 0;
		for (int i = strlen(newNum) - 1; i >= 0; i--)
		{
			tempC[cnt++] = newNum[i];
		}
		tempC[cnt] = '\0';
		Number temp(tempC, 10);
		strcpy_s(num, temp.num);
		n = 10;
		return temp;

	}
	friend Number operator+(Number obj1, Number obj2);
	~Number();

	// add operators and copy/move constructor
	int SwitchToNumber();
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};

