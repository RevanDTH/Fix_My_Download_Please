

/*
 * Author:
 * RevanDTH
 * 
 * LAST MODIFIED:
 *   2025-11-07
 *
 * VERSION:
 *   0.1.0 (initial prototype)
 *
 * PLATFORM:
 *   Windows
 *   Mac (not at the moment)
 * 
 * DEPENDENCIES:
 *   - <iostream>
 *   - <Windows.h>
 *   - <list> 
 *
 * NOTES:
 *   - Just a small prototype I'm working on 
 */

#include <iostream>
#include <Windows.h>
#include <list>


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
        cout << "What launcher do you want to " << endl;
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