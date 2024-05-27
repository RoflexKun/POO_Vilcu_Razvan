#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "contactType.h"
using namespace std;
class Contact
{
protected:
	string contactName;
public:
	Contact(string name)
	{
		contactName = name;
	}
	virtual string getName() = 0;
	virtual contactType getType() = 0;
	virtual void getInfo() = 0;
};

