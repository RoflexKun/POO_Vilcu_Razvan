#include "Number.h"
#include <cstring>
#include <iostream>

Number::Number(const char* value, int base)
{
	strcpy_s(num, value);
	n = base;
}

int Number::GetDigitsCount()
{
	return strlen(num);
}

void Number::Print()
{
	std::cout << num;
	std::cout << '\n';
}

int Number::GetBase()
{
	return n;
}

void Number::SwitchBase(int newBase)
{
	int p = 1;
	int temp = 0;
	if (n != 10)
	{
		for (int i = strlen(num) - 1; i >= 0; i--)
			{
				if (num[i] >= 'A' && num[i] <= 'F')
				{
					int x = (num[i] - 'A') + 10;
					temp += p * x;
					p *= n;
				}
				else
				{
					int x = (num[i] - '0');
					temp += p * x;
					p *= n;
				}
			}
	}
	char newNum[20];
	int cnt = 0;
	while (temp != 0)
	{
		int rest = temp % newBase;
		if (rest > 9)
		{
			char c = rest % 10 + 'A';
			newNum[cnt++] = c;
		}
		else
		{
			char c = rest + '0';
			newNum[cnt++] = c;
		}
		temp /= newBase;
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
	strcpy_s(num, tempC);
	n = newBase;
}

Number::~Number()
{

}
Number operator+(Number obj1, Number obj2)
{
	unsigned long long obj1_num = obj1.SwitchToNumber();
	unsigned long long obj2_num = obj2.SwitchToNumber();
	cout << obj1_num << " " << obj2_num << '\n';
	obj1_num += obj2_num;
	char newNum[20];
	newNum[0] = '\0';
	int cnt = 0;
	while (obj1_num != 0)
	{
		char c = obj1_num % 10 + '0';
		newNum[cnt++] = c;
		obj1_num /= 10;
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
	return temp;
}

int Number::SwitchToNumber()
{
	int p = 1;
	int nr = 0;
	for (int i = strlen(num) - 1; i >= 0; i--)
	{
		if (num[i] >= 'A' && num[i] <= 'F')
		{
			int x = (num[i] - 'A') + 10;
			nr += p * x;
			p *= n;
		}
		else
		{
			int x = (num[i] - '0');
			nr += p * x;
			p *= n;
		}
	}
	return nr;
}