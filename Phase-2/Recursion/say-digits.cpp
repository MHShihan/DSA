#include <iostream>
using namespace std;

void sayDigits(int n, string numbers[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // Recursive call
    sayDigits(n, numbers);

    cout << numbers[digit] << " ";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string numbers[10] = {"Zero", "One", "Two", "Three", "Four",
                          "Five", "Six", "Seven", "Eight", "Nine"};

    sayDigits(n, numbers);

    return 0;
}