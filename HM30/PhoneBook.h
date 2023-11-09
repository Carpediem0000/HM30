#pragma once
#include <iostream>
#include <vector>
#include "Contact.h"
#include "Persona.h"
#include "Colleague.h"
#include "Friend.h"
#include "Date.h"
using namespace std;

class PhoneBook
{
	vector<Contact*> arr;
public:
	PhoneBook();
	~PhoneBook();

	void addContact(Contact* contact);
	void addContact();
	void delContact(int ind);
	void editContact(int ind);
	void searchContactsByType(const string& type)const;

	void showContacts()const;
};

