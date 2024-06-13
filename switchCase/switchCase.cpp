#include <iostream>
using namespace std;

int main()
{

    char button;
    cout << "Enter a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;

    case 'b':
        cout << "Hola" << endl;
        break;

    case 'c':
        cout << "Hellow" << endl;
        break;

    default:
        cout << "Not hello";
        break;
    }

    return 0;
}