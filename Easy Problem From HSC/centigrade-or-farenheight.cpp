#include <iostream>
using namespace std;

float centigradeToFarenheight(float c)
{
    float f = (9 * c) / 5 + 32;
    return f;
}

float farenheightToCentigrade(float f)
{
    float c = 5 * (f - 32) / 9;
    return c;
}

int main()
{

    int n;
    cout << "1: Centigrade to Farenheight." << endl;
    cout << "2: Farenheight to Centigrade." << endl;
    cin >> n;

    if (n == 1)
    {
        float c;
        cout << "Enter the value of Centigrade: ";
        cin >> c;
        cout << "The value of Farenheight is " << centigradeToFarenheight(c) << endl;
    }
    else
    {
        float f;
        cout << "Enter the value of Farenheight: ";
        cin >> f;
        cout << "The value of Centigrade is " << farenheightToCentigrade(f) << endl;
    }

    return 0;
}