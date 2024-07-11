#include <iostream>
using namespace std;

string toLowerCase(string s)
{
    int i = 0;
    int n = s.size();
    string temp;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            temp.push_back(s[i]);
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            temp.push_back(s[i]);
        }

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            char ch = tolower(s[i]);
            temp.push_back(ch);
        }
    }

    return temp;
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    string s = "c1 O$d@eeD o1c";
    string s2 = "11c1 O$d@eeD o1c11";
    string newString = toLowerCase(s2);
    cout << "New String -> " << toLowerCase(s2) << endl;

    if (checkPalindrome(newString) == 1)
    {
        cout << s << " --> Palindrome" << endl;
    }
    else
    {
        cout << s << " --> NOT Palindrome" << endl;
    }

    return 0;
}