#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        // or ch - 32;
        // 'A' = 65  and 'a' = 97
        return ch - 'A' + 'a';
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

        if (toLowerCase(s[st]) != toLowerCase(s[e]))
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
    string s = "c1 O$d@eeD o1c";
    cout << checkPalindrome2(s) << endl;

    cout << "Lower case : " << toLowerCase('H') << endl;

    return 0;
}