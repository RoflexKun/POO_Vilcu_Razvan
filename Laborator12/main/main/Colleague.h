#pragma once
#include "Contact.h"
class Colleague : public Contact
{
	string phoneNumber;
	string company;
	string address;
public:
	Colleague(string name, string number, string comp, string addy) : Contact(name)
	{
		contactName = name;
		phoneNumber = number;
		company = comp;
		address = addy;
	}
	string getName() {
		return contactName;
	}
	contactType getType()
	{
		return COLLEAGUE;
	}

	void getInfo()
	{
		cout << contactName << ": COLLEAGUE" << '\n';
		cout << "Company:" << this->company << "\nPhone Number: " << this->phoneNumber << "\nAddress: " << this->address << '\n' << '\n';
	}
};

