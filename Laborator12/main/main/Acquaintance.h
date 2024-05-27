#pragma once
#include "Contact.h"
class Acquaintance : public Contact
{
	string phoneNumber;
public:
	Acquaintance(string name2, string number) : Contact(name2)
	{
		contactName = name2;
		phoneNumber = number;
	}
	string getName() {
		return contactName;
	}
	contactType getType()
	{
		return ACQUAINTANCE;
	}
	void getInfo()
	{
		cout << contactName << ": ACQUAINTANCE" << '\n';
		cout << "Phone Number:" <<  this->phoneNumber  << '\n' << '\n';
	}
};

