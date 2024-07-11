#include <iostream>
using namespace std;

bool isAlphabetic(char ch)
{
    return ch >= '0' && ch <= '9' ||
           ch >= 'A' && ch <= 'Z' ||
           ch >= 'a' && ch <= 'z';
}

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st <= e)
    {
        while (st < e && !isAlphabetic(s[st]))
        {
            st++;
        }

        while (st < e && !isAlphabetic(s[e]))
        {
            e--;
        }

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
    string s = "A man, a plan, a canal: Panama";

    cout << isPalindrome(s) << endl;

    return 0;
}