#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    int c = 4;
    cout << "a|b: " << (a | b) << endl;
    cout << "a&b: " << (a & b) << endl;
    cout << "c&1: " << (c & 1) << endl;
    cout << "~a: " << ~a << endl;
    cout << "a^b: " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (21 << 1) << endl;
    cout << (21 << 2) << endl;

    return 0;
}