#include <bits/stdc++.h>
using namespace std;

char toUpperCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        // or ch - 32;
        // 'A' = 65  and 'a' = 97
        return ch - 'a' + 'A';
    }
}

bool checkPalindrome(string s)
{
    string temp = s;
    int st = 0;
    int e = s.size() - 1;

    while (st <= e)
    {
        swap(s[st++], s[e--]);
    }

    return temp == s;
}
bool checkPalindrome2(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st <= e)
    {
        if (toUpperCase(s[st]) != toUpperCase(s[e]))
        {
            return 0;
        }
        st++;
        e--;
    }

    return 1;
}

int main()
{
    string s = "DAd";
    cout << checkPalindrome2(s) << endl;

    cout << "UpperCase : " << toUpperCase('d') << endl;

    return 0;
}