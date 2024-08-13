#include <iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = ch - 'a';

        arr[number]++;
    }

    int ans = 0;
    int maxi = -1;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return ans + 'a';
}

int main()
{
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}