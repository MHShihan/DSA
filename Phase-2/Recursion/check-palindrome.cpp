#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    return checkPalindrome(str, i + 1, j - 1);
}

int main()
{
    string str = "racecar";

    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
        cout << "PALINDROME" << endl;
    else
        cout << "NOT PALINDROME" << endl;

    return 0;
}