#include "PriorityQueue.h"

void PriorityQueue::operator+=(int value)
{
	char num[10];
	int count = 0;
	while (value)
	{
		char temp = value % 10;
		num[count++] = temp;
		value = value / 10;
	}
	num[count] = '\0';
	for (int i = 0; i < count; i++)
		this->q[this->numberElements][i] = num[i];
	this->numberElements++;

	for(int i = 0; i<this->numberElements-1;i++)
		for (int j = i + 1; j < this->numberElements; j++)
		{
			int a = 0, b = 0;
			const char* p = this->q[i];
			const char* l = this->q[j];
			while (p)
			{
				a = a * 10 + (int)(p - '0');
				p++;
			}
			while (l)
			{
				b = b * 10 + (int)(l - '0');
				l++;
			}
			if (a > b)
			{
				const char*p = this->q[i];
				const char*l = this->q[j];
				this->q[i] = l;
				this->q[j] = p;

			}
		}

}

void operator--(PriorityQueue myQueue)
{
	const char** p = this->q;
	p++;
	this->q = p;
}

int PriorityQueue::operator()(const char* c)
{
	if (c == "sum")
	{
		int sum = 0;
		for (int i = 0; i < this->numberElements; i++)
		{
			const char* p = q[i];
			int a = 0;
			while (p)
			{
				a = a * 10 + (int)(p - '0');
				p++;
			}
			sum += a;
		}
		return sum;
	}
	else if (c == "min")
	{
		int minim = 1e9;
		for (int i = 0; i < this->numberElements; i++)
		{
			const char* p = q[i];
			int a = 0;
			while (p)
			{
				a = a * 10 + (int)(p - '0');
				p++;
			}
			if (a < minim)
				minim = a;
		}
		return minim;
	}
	else if(c == "max")
	{
		int maxim = -1e9;
		for (int i = 0; i < this->numberElements; i++)
		{
			const char* p = q[i];
			int a = 0;
			while (p)
			{
				a = a * 10 + (int)(p - '0');
				p++;
			}
			if (a > maxim)
				maxim = a;
		}
		return maxim;
	}
}