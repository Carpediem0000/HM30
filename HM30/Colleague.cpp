#include "Colleague.h"

Colleague::Colleague()
{
    this->fax = "undefined";
    this->org = "undefined";
}

Colleague::Colleague(string lastName, string phoneNumber, string address, string org, string fax)
    :Persona(lastName, phoneNumber, address)
{
    this->fax = fax;
    this->org = org;
}

void Colleague::setOrg(string org)
{
    this->org = org;
}

void Colleague::setFax(string fax)
{
    this->fax = fax;
}

string Colleague::getOrg() const
{
    return org;
}

string Colleague::getFax() const
{
    return fax;
}

void Colleague::print() const
{
    Persona::print;
    cout << "Organization: " << org << endl;
    cout << "Fax: " << fax << endl;
}

string Colleague::type() const
{
    return "Colleague";
}
