#pragma once
#include "Contact.h"
#include "Friend.h"
class AddressBook
{
	vector<Contact*> myContacts;
public:
	Contact* searchName(string name);
	vector<Contact*> myFriends();
	AddressBook& deleteContact(string name);
	AddressBook& addContact(Contact* name);
	void printContacts();

};

