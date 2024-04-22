#pragma once
class PriorityQueue
{
	char* q[105];
	int numberElements = 0;
public:
	PriorityQueue(int value)
	{
		char num[10];
		int count = 0;
		while (value)
		{
			char temp = value % 10;
			num[count++] = temp;
			value = value / 10;
		}
		this->q[0] = num;
	}
	~PriorityQueue()
	{
		delete[] q;
	}
	void operator+=(int value);
	friend void operator--(PriorityQueue myQueue);
	int operator()(const char* c);
};

