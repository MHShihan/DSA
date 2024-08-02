#include <iostream>
using namespace std;

int getPow(int num, int power)
{

    if (num == 0)
        return 0;

    if (power == 0)
        return 1;

    int result = 1;

    while (power != 0)
    {

        result = result * num;

        power--;
    }

    return result;
}

int main()
{
    int num, power;
    cout << "Enter a number and a power:  ";
    cin >> num >> power;

    cout << num << " to the power " << power << " is " << getPow(num, power) << endl;
    return 0;
}