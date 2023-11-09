#include "Friend.h"

Friend::Friend()
{
    this->birth = Date();
}

Friend::Friend(string lastName, string phoneNumber, string address, Date birth)
    :Persona(lastName, phoneNumber, address)
{
    this->birth = birth;
}

void Friend::setBirth(Date birth)
{
    this->birth = birth;
}

Date Friend::getBith() const
{
    return birth;
}

void Friend::print() const
{
    Persona::print();
    cout << "Birthday: "; birth.showDate(); cout << endl;
}

string Friend::type() const
{
    return "Friend";
}
