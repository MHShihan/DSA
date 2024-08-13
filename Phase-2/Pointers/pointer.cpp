#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int a = num;

    cout << num << endl;
    a++;
    cout << num << endl;

    int *p = 0;
    p = &num;

    cout << num << endl;
    (*p)++;
    cout << num << endl;

    // Copying a pointer
    int *q = p;
    cout << p << " -- " << q << endl;
    cout << *p << " -- " << *q << endl;

    return 0;
}