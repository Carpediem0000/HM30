#include "Persona.h"

Persona::Persona()
{
    this->lastName = "Undefined";
    this->phoneNumber = "0*********";
    this->address = "Undefined";
}

Persona::Persona(string lastName, string phoneNumber, string address)
{
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
    this->address = address;
}

void Persona::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Persona::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Persona::setAddress(string address)
{
    this->address = address;
}

string Persona::getLastName() const
{
    return lastName;
}

string Persona::getPhoneNumber() const
{
    return phoneNumber;
}

string Persona::getAddress() const
{
    return address;
}

void Persona::print() const 
{ 
    cout << "Last name: " << lastName << endl;
    cout << "Phone number: " << phoneNumber << endl;
    cout << "Address: " << address << endl;
}

string Persona::type() const
{
    return "Persona";
}
