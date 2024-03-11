#include "Math.h";
#include <iostream>
#include <cstring>
#include <stdarg.h>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list x;
	va_start(x, count);
	for (int i = 0; i < count; i++)
		sum += va_arg(x, int);
	va_end(x);
	return sum;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return nullptr;

	char temp[100];
	temp[0] = '\0';
	strcat_s(temp, a);
	strcat_s(temp, b);
	temp[strlen(temp) - 1] = '\0';
	return temp;
}


