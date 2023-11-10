#include "PhoneBook.h"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook()
{
    for (Contact* contact : arr) 
    {
        delete contact;
    }
    arr.clear();
}

void PhoneBook::addContact(Contact* contact) { arr.push_back(contact); }

void PhoneBook::addContact()
{  
    int menu = 0;
    string str;
    Date dt;
    int date;
    do
    {
        Persona* persona = nullptr;
        Colleague* colleague = nullptr;
        Friend* friendd = nullptr;

        cout << "\tAdd contact menu\n";
        cout << "Select a group:\n";
        cout << "  1 - Persona\n";
        cout << "  2 - Colleague\n";
        cout << "  3 - Friend\n";
        cout << "  0 - Exit\n";
        cin >> menu;

        switch (menu)
        {
        case 1:    
            persona = new Persona;
            cout << "Enter last name: ";
            cin >> str;
            persona->setLastName(str); str.clear();

            cout << "Enter phone number: ";
            cin >> str;
            persona->setPhoneNumber(str); str.clear();

            cout << "Enter Address: ";
            cin.ignore();
            getline(cin, str);
            persona->setAddress(str); str.clear();
            
            arr.push_back(persona);
            cout << "Contact add!\n";
            break;
        case 2:
            colleague = new Colleague;
            cout << "Enter last name: ";
            cin >> str;
            colleague->setLastName(str); str.clear();

            cout << "Enter phone number: ";
            cin >> str;
            colleague->setPhoneNumber(str); str.clear();

            cout << "Enter Address: ";
            cin.ignore();
            getline(cin, str);
            colleague->setAddress(str); str.clear();

            cout << "Enter Organization: ";
            getline(cin, str);
            colleague->setOrg(str); str.clear();

            cout << "Enter Fax: ";
            cin >> str;
            colleague->setFax(str); str.clear();
            
            arr.push_back(colleague);
            cout << "Contact add!\n";
            break;
        case 3:
            friendd = new Friend;
            cout << "Enter last name: ";
            cin >> str;
            friendd->setLastName(str); str.clear();

            cout << "Enter phone number: ";
            cin >> str;
            friendd->setPhoneNumber(str); str.clear();

            cout << "Enter Address: ";
            cin.ignore();
            getline(cin, str);
            friendd->setAddress(str); str.clear();

            cout << "Enter birthday\n";
            cout << "Enter day(1-31):";
            cin >> date;
            dt.setDay(date);
            cout << "Enter month(1-12):";
            cin >> date;
            dt.setMonth(date);
            cout << "Enter year:";
            cin >> date;
            dt.setYear(date);
            friendd->setBirth(dt);
            
            arr.push_back(friendd);
            cout << "Contact add!\n";
            break;
        case 0:
            cout << "Good bye\n";
            break;
        default:
            cout << "Try again\n";
            break;
        }
        system("cls");
    } while (menu);
}

void PhoneBook::delContact(int ind)
{
    if (ind >= 0 && ind < arr.size()) {
        delete arr[ind];
        arr.erase(arr.begin() + ind);
    }
    else cout << "Contact not found :(\n";
}

void PhoneBook::editContact(int ind)
{
    int menu = 0;
    string str;
    Date dt;
    int date;
    do
    {
        if (ind >= 0 && ind < arr.size()) { arr[ind]->print(); }
        else cout << "Contact not found :(\n";

        if (arr[ind]->type() == "Persona"){
            cout << "\tEdit contact menu\n";
            cout << " 1 - Edit last name\n";
            cout << " 2 - Edit phone number\n";
            cout << " 3 - Edit Address\n";
            cout << " 0 - Exit\n";
            cin >> menu;

            switch (menu)
            {
            case 1:
                cout << "Enter last name: ";
                cin >> str;
                ((Persona*)arr[ind])->setLastName(str);
                break;
            case 2:
                cout << "Enter phone number: ";
                cin >> str;
                ((Persona*)arr[ind])->setPhoneNumber(str);
                break;
            case 3:
                cout << "Enter Address: ";
                cin.ignore();
                getline(cin, str);
                ((Persona*)arr[ind])->setAddress(str);
                break;
            case 0:
                cout << "Good bye\n";
                break;
            default:
                cout << "Try again\n";
                break;
            }      
        }
        else if (arr[ind]->type() == "Colleague") {
            cout << "\tEdit contact menu\n";
            cout << " 1 - Edit last name\n";
            cout << " 2 - Edit phone number\n";
            cout << " 3 - Edit Address\n";
            cout << " 4 - Edit Organization\n";
            cout << " 5 - Edit Fax\n";
            cin >> menu;

            switch (menu)
            {
            case 1:
                cout << "Enter last name: ";
                cin >> str;
                ((Colleague*)arr[ind])->setLastName(str);
                break;
            case 2:
                cout << "Enter phone number: ";
                cin >> str;
                ((Colleague*)arr[ind])->setPhoneNumber(str);
                break;
            case 3:
                cout << "Enter Address: ";
                cin.ignore();
                getline(cin, str);
                ((Colleague*)arr[ind])->setAddress(str);
                break;
            case 4:
                cout << "Enter Organization: ";
                cin.ignore();
                getline(cin, str);
                ((Colleague*)arr[ind])->setOrg(str);
            case 5:
                cout << "Enter Fax: ";
                cin >> str;
                ((Colleague*)arr[ind])->setFax(str);
                break;
            case 0:
                cout << "Good bye\n";
                break;
            default:
                cout << "Try again\n";
                break;
            }
        }
        else {
            cout << "\tEdit contact menu\n";
            cout << " 1 - Edit last name\n";
            cout << " 2 - Edit phone number\n";
            cout << " 3 - Edit Address\n";
            cout << " 4 - Edit birthday\n";
            cin >> menu;

            switch (menu)
            {
            case 1:
                cout << "Enter last name: ";
                cin >> str;
                ((Friend*)arr[ind])->setLastName(str);
                break;
            case 2:
                cout << "Enter phone number: ";
                cin >> str;
                ((Friend*)arr[ind])->setPhoneNumber(str);
                break;
            case 3:
                cout << "Enter Address: ";
                cin.ignore();
                getline(cin, str);
                ((Friend*)arr[ind])->setAddress(str);
                break;
            case 4:
                cout << "Enter birthday\n";
                cout << "Enter day(1-31):";
                cin >> date;
                ((Friend*)arr[ind])->setPhoneNumber(str);
                cout << "Enter month(1-12):";
                cin >> date;
                dt.setMonth(date);
                cout << "Enter year:";
                cin >> date;
                dt.setYear(date);
                ((Friend*)arr[ind])->setBirth(dt);
            case 0:
                cout << "Good bye\n";
                break;
            default:
                cout << "Try again\n";
                break;
            }
        }
        system("cls");
    } while (menu);
}

void PhoneBook::searchContacts() const
{
    int menu = 0;
    int sub_menu = 0;
    string str;
    bool in = false;
    do
    {
        cout << "\tSearch menu\n";
        cout << "1 - search by type\n";
        cout << "2 - search by second name\n";
        cin >> menu;

        switch (menu)
        {
        case 1:
            do
            {
                cout << "\tSearch by type\n";
                cout << "Select a group:\n";
                cout << "  1 - Persona\n";
                cout << "  2 - Colleague\n";
                cout << "  3 - Friend\n";
                cout << "  0 - Exit\n";
                cin >> sub_menu;

                switch (sub_menu)
                {
                case 1:
                    cout << "\tPersona\n";
                    for (Contact* contact : arr)
                    {
                        if (contact->type() == "Persona")
                        {
                            ((Persona*)contact)->print();
                        }
                    }
                    Sleep(5000);
                    break;
                case 2:
                    cout << "\tColleague\n";
                    for (Contact* contact : arr)
                    {
                        if (contact->type() == "Colleague")
                        {
                            ((Colleague*)contact)->print();
                        }
                    }
                    Sleep(5000);
                    break;
                case 3:
                    cout << "\tFriend\n";
                    for (Contact* contact : arr)
                    {
                        if (contact->type() == "Friend")
                        {
                            ((Friend*)contact)->print();
                        }
                    }
                    Sleep(5000);
                    break;
                case 0:
                    cout << "Good bye\n";
                    break;
                default:
                    cout << "Try again\n";
                    break;
                }
            } while (!sub_menu);
            break;
        case 2:
            cout << "\tSearch by second name\n";
            cout << "Enter second name: ";
            cin >> str;

            for (Contact* contact : arr)
            {
                if ((*contact).getLastName() == str)
                {
                    in = true; break;
                }
            }

            if (in)
            {
                for (Contact* contact : arr)
                {
                    if ((*contact).getLastName() == str)
                    {
                        contact->print();
                    }
                }
            }
            Sleep(5000);
            break;
        case 0:
            cout << "Good bye\n";
            break;
        default:
            cout << "Try again\n";
            break;
        }
    } while (menu);
}

void PhoneBook::showContacts() const
{
    /*sort(arr.begin(), arr.end(),
        [](const Contact* a, const Contact* b) {
            return a->type() < b->type();
        });*/
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]->type() == "Persona")
        {
            cout << "#" << i << " Name: " << ((Persona*)arr[i])->getLastName() << " | Type: " << ((Persona*)arr[i])->type() << endl;
        }
        else if (arr[i]->type() == "Colleague")
        {
            cout << "#" << i << " Name: " << ((Colleague*)arr[i])->getLastName() << " | Type: " << ((Colleague*)arr[i])->type() << endl;
        }
        else
        {
            cout << "#" << i << " Name: " << ((Friend*)arr[i])->getLastName() << " | Type: " << ((Friend*)arr[i])->type() << endl;
        }
    }
    Sleep(7000);
}
