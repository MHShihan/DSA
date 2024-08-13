#include <iostream>
using namespace std;

// 1910. Remove all occurrences of  a Substring

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        cout << "s.find(part) -> " << s.find(part) << endl;
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s, part) << endl;

    return 0;
}