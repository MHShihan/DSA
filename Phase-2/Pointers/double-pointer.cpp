#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl
         << endl
         << "Value of i " << i << endl;
    cout << "Address of i " << &i << endl;
    cout << endl;

    // p
    cout << "Value of p " << p << endl;
    cout << "Printing *p2 " << *p2 << endl;
    cout << "Address of  p " << &p << endl;
    cout << endl;

    // p2
    cout << "Value of  p2 " << p2 << endl;
    cout << "Address of  p2 " << &p2 << endl;
    cout << endl;

    cout << "Printing **p2 -> " << **p2 << endl;

    return 0;
}