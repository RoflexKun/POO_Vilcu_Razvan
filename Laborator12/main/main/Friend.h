#pragma once
#include "Contact.h"
class Friend : public Contact
{
	string birthday;
	string phoneNumber;
	string address;
public:
	Friend(string name2, string birthday2, string phoneNumber2, string adress2) : Contact(name2) {
		this->contactName = name2;
		this->birthday = birthday2;
		this->phoneNumber = phoneNumber2;
		this->address = adress2;
	}
	string getName() {
		return contactName;
	}
	contactType getType()
	{
		return FRIEND;
	}
	void getInfo()
	{
		cout << contactName << ": FRIEND" << '\n';
		cout << "Birthday:" <<this->birthday << "\nPhone Number : " << this->phoneNumber << "\nAddress: " << this->address << '\n' << '\n';
	}
};

