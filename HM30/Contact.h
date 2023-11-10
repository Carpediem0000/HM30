#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact
{
protected:
	
public:
	Contact();

	virtual string getLastName()const;
	virtual void print() const;
	virtual string type() const;
};

