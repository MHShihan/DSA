#include <iostream>
using namespace std;

void update1(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    /*
    int i = 5;

    // creating reference variable
    int &j = i;

    cout << &j << endl;
    cout << &i << endl;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    */

    int n = 5;

    cout << "before " << n << endl;
    update1(n);
    cout << "after " << n << endl;

    update2(n);
    cout << "after update2 " << n << endl;

    return 0;
}