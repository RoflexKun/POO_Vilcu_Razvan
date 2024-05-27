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

AddressBook& AddressBook::deleteContact(string name)
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
    return *this;
}

AddressBook& AddressBook::addContact(Contact* name)
{
    myContacts.push_back(name);
    return (*this);
}

void AddressBook::printContacts()
{
    for (auto i : myContacts)
    {
        i->getInfo();
    }
}
