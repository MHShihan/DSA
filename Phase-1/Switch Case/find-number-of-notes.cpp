#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter an amount of taka: ";
    cin >> amount;

    int remainingAmount = amount;
    int hundreds, fifties, twenties, tens, ones;

    switch (1)
    {
    case 1:
        hundreds = remainingAmount / 100;
        remainingAmount %= 100;
    case 2:
        fifties = remainingAmount / 50;
        remainingAmount %= 50;
    case 3:
        twenties = remainingAmount / 20;
        remainingAmount %= 20;
    case 4:
        tens = remainingAmount / 10;
        remainingAmount %= 10;
    case 5:
        ones = remainingAmount / 1;
        remainingAmount %= 1;
    }
    cout << "Amount: " << amount << endl;
    cout << "100 taka notes: " << hundreds << endl;
    cout << "50 taka notes: " << fifties << endl;
    cout << "20 taka notes: " << twenties << endl;
    cout << "10 taka notes: " << tens << endl;
    cout << "1 taka notes: " << ones << endl;

    return 0;
}