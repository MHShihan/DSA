#include <bits/stdc++.h>
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

bool checkPalindrome(long long N)
{
    string binaryRep = "";

    while (N > 0)
    {
        binaryRep += (N % 2) ? '1' : '0';
        N = N / 2;
    }

    bool isPalindrome = checkPalindrome(binaryRep, 0, binaryRep.length() - 1);
    return isPalindrome;
}

int main()
{

    if (checkPalindrome(3))
        cout << "PALINDROME" << endl;
    else
        cout << "NOT PALINDROME" << endl;

    return 0;
}