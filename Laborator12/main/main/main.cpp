#include <iostream>
#include "Contact.h"
#include "AddressBook.h"
#include "Friend.h"
#include "Acquaintance.h"
#include "Colleague.h"
int main()
{
    AddressBook list;
    list.addContact(new Friend("Kratos", "12.12.102", "071234563", "Str. strazilor"));
    list.addContact(new Acquaintance("Paul", "1234567890"));
    list.addContact(new Colleague("CEO", "BitDefender", "07777777", "Str. sefilor"));
    vector<Contact*> friends = list.myFriends();
    for(auto i : friends)
        cout << i->getName() << " ";
    cout << '\n';
    list.printContacts();
    list.deleteContact("Kratos");
    list.printContacts();
}