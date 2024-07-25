#include <iostream>
using namespace std;

float centigradeToFarenheight(float c)
{
    float f = (9 * c) / 5 + 32;
    return f;
}

int main()
{

    float c;
    cout << "Enter the value of centigrade: ";
    cin >> c;

    cout << "The value of Farenheight is " << centigradeToFarenheight(c) << endl;

    return 0;
}