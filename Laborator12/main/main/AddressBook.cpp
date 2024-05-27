#include "AddressBook.h"

Contact* AddressBook::searchName(string name)
{
    for (auto i : myContacts)
    {
        if (i->getName() == name)
            return i;
    }
    return nullptr;
}

vector<Contact*> AddressBook::myFriends()
{
    vector<Contact*> friends;
    for (auto i : myContacts)
        if (i->getType() == FRIEND)
            friends.push_back(i);
    return friends;
}

void AddressBook::deleteContact(string name)
{
    for (int i = 0; i < myContacts.size(); i++)
    {
        if (myContacts[i]->getName() == name)
        {
            for (int j = i; j < myContacts.size() - 1; j++)
                myContacts[j] = myContacts[j + 1];
            myContacts.pop_back();
        }          
    }
}

void AddressBook::addContact(Contact* name)
{
    myContacts.push_back(name);
}

void AddressBook::printContacts()
{
    for (auto i : myContacts)
    {
        i->getInfo();
    }
}
