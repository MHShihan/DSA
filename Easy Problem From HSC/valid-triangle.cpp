#include <iostream>
using namespace std;

void isValidTriangle(int a, int b, int c)
{
    (a || b || c != 0) && (a + b) > c && (b + c) > a && (c + a) > b ? cout << "Valid Triangle" << endl : cout << "Not Valid" << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter three integer number: ";
    cin >> a >> b >> c;
    int centigrade, farenheight;

    isValidTriangle(a, b, c);

    return 0;
}
