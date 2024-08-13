#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << num << endl;

    // Address of Operator
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address of num is " << ptr << endl;
    cout << "Value of num is " << *ptr << endl;

    num++;
    cout << "Value of num is " << *ptr << endl;

    double d = 4.5;
    double *ptr2 = &d;

    cout << "Address of num is " << ptr2 << endl;
    cout << "Value of num is " << *ptr2 << endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;
    cout << "Size of pointer is " << sizeof(ptr2) << endl;

    return 0;
}