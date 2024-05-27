#pragma once
#include "Contact.h"
#include "Friend.h"
class AddressBook
{
	vector<Contact*> myContacts;
public:
	Contact* searchName(string name);
	vector<Contact*> myFriends();
	void deleteContact(string name);
	void addContact(Contact* name);
	void printContacts();

};

