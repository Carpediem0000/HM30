#pragma once
#include "Persona.h"
#include "Date.h"
class Friend :
    public Persona
{
    Date birth;
public:
    Friend();
    Friend(string lastName, string phoneNumber, string address, Date birth);

    void setBirth(Date birth);

    Date getBith()const;
    string getLastName()const override;

    void print() const override;
    virtual string type() const override;
};

