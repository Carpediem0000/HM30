#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact
{
protected:
	
public:
	Contact();

	virtual void print() const;
	virtual string type() const;
};

