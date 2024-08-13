#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s, int start, int end)
{
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

void reverseWord(vector<char> &s)
{
    int start = 0;
    for (int i = 0; i <= s.size(); i++)
    {

        if (s[i] == ' ' || i == s.size())
        {
            reverseString(s, start, i - 1);
            start = i + 1;
        }
    }
}

void printArray(vector<char> s)
{
    for (char i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> s = {'h', 'i', ' ', 'i', 's', ' ', 'w', 'e', ' ', 'm', 'e'};

    reverseString(s, 0, s.size() - 1);
    printArray(s);

    reverseWord(s);
    printArray(s);

    return 0;
}