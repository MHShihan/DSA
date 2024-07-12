#include <iostream>
using namespace std;

bool checkEqual(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    // create a count array for s1
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // Crete first window for the first two character of s2
    int count2[26] = {0};
    int windowSize = s1.length();
    int i = 0;
    while (i < windowSize)
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
        return 1;

    // create second window to compare the rest of the character
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if (checkEqual(count1, count2))
            return 1;
    }

    return 0;
}

int main()
{
    string s1 = "ab";
    string s2 = "hdfjklsdahflkadjsfh";

    bool output = checkInclusion(s1, s2);
    cout << output << endl;

    return 0;
}