#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << endl;
        int option;
        cout << "Enter a number from (1 - 3, 0 to exit): ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Option 1 Selected" << endl;
            exit(0);
        case 2:
            cout << "Option 2 selected" << endl;
            exit(0);
        case 3:
            cout << "Option 3 selected" << endl;
        case 0:
            cout << "Exit loop" << endl;
            exit(0);
        default:
            cout << "Invalid option! Try again" << endl;
            exit(0);
        }
    }

    return 0;
}