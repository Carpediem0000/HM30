#pragma once
#include "Contact.h"
class Persona :
    public Contact
{
protected:
    string lastName;
    string phoneNumber;
    string address;
public:
    Persona();
    Persona(string lastName, string phoneNumber, string address);

    void setLastName(string lastName);
    void setPhoneNumber(string phoneNumber);
    void setAddress(string address);

    string getLastName()const;
    string getPhoneNumber()const;
    string getAddress()const;

    void print() const override;
    virtual string type() const override;
};

