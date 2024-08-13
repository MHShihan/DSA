#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0;
    while (i < s.length())
    {
        if (i + 1 < s.length() && s[i] == s[i + 1])
        {
            s.erase(i, 2);
            if (i > 0)
            {
                i--;
            }
        }
        else
        {
            i++;
        }
    }
    return s;
}

int main()
{

    return 0;
}