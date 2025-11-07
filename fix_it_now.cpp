#include <iostream>
#include <Windows.h>


int main(int argc, char const *argv[])
{
    using namespace std;

    int userChoice;
    string userLauncher;

    cout << "=====================" << endl;
    cout << "Fix My Download Please" << endl;
    cout << "=====================" << endl;
    cout << "(1) Stop consuming processes" << endl;
    cout << "(2) Exit" << endl;

    cout << ": ";
    cin >> userChoice;

    switch (userChoice)
    {
    case 1:
        system("cls");
        cout << "OK i will do something" << endl;
        break;
    case 2:
        return 0;
    default:
    system("cls");
    cout << "Please enter a valid argument!" << endl;
    cout << "Press ENTER to continue . . ." << endl;
    cin.ignore();
    cin.get();
        break;
    }



    return 0;
}