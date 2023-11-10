#include "PhoneBook.h"

int main()
{
    setlocale(0, "");
    PhoneBook arr;
    arr.addContact(new Persona("Ваня", "380964674814", "Адрес1"));
    arr.addContact(new Persona("Маша", "380944674714", "Адрес12"));
    arr.addContact(new Friend("Петров", "380964674814", "Адрес3", Date()));
    arr.addContact(new Persona("Дима", "380964674814", "Адрес13"));
    arr.addContact(new Colleague("Миша", "380964674814", "Адрес15", "ITStep", "53673"));
    arr.addContact(new Colleague("Валера", "380964674814", "Адрес1", "ITStep", "34784"));
    arr.addContact(new Friend("Вика", "380964674814", "Адрес18", Date()));
    arr.addContact(new Friend("Юля", "380964674814", "Адрес31", Date()));
    arr.addContact(new Colleague("Андрей", "380964674814", "Адрес41", "ITStep", "47954"));
    arr.addContact(new Colleague("Каролина", "380964674814", "Адрес51", "ITStep", "37843"));

    int menu = 0;
    int num = 0;

    do
    {
        cout << "1 - show contact\n";
        cout << "2 - add contact\n";
        cout << "3 - remove contact\n";
        cout << "4 - edit contact\n";
        cout << "5 - search contact\n";
        cin >> menu;

        switch (menu)
        {
        case 1:
            arr.showContacts(); break;
        case 2:
            arr.addContact(); break;
        case 3:
            cout << "\tRemove contact\n";
            cout << "Enter num: ";
            cin >> num;
            arr.delContact(num); break;
        case 4:
            cout << "\tEdit contact\n";
            cout << "Enter num: ";
            cin >> num;
            arr.editContact(num); break;
        case 5:
            arr.searchContacts(); break;
        default:
            break;
        }
        system("cls");
    } while (menu);
}