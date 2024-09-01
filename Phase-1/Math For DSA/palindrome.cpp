#include <iostream>
using namespace std;

bool checkPalindrome(int n)
{
    int num = n;

    if (n < 1)
        return false;

    int reverseInt = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reverseInt = (reverseInt * 10) + digit;
        n /= 10;
    }

    if (num == reverseInt)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (checkPalindrome(n))
        cout << "ITS A PALINDROMIC NUMBER" << endl;
    else
        cout << "ITS NOT A PALINDROME" << endl;

    return 0;
}