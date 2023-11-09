#pragma once
#include "Persona.h"
class Colleague :
    public Persona
{
    string org;
    string fax;
public:
    Colleague();
    Colleague(string lastName, string phoneNumber, string address, string org, string fax);

    void setOrg(string org);
    void setFax(string fax);

    string getOrg()const;
    string getFax()const;

    void print() const override;
    virtual string type() const override;
};

