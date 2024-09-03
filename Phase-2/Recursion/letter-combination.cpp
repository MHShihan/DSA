#include <iostream>
#include <vector>
using namespace std;

void letterCombinations(string digits, int index, string output, string mapping[], vector<string> &ans)
{
    // BASE CASE
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string str = mapping[number];

    for (int i = 0; i < str.length(); i++)
    {
        output.push_back(str[i]);
        // RECURSIVE CALL
        letterCombinations(digits, index + 1, output, mapping, ans);
        // BACK TRACK
        output.pop_back();
    }
}

int main()
{
    string digit;
    cout << "Enter a integer value from 2 to upto 4 digit: ";
    cin >> digit;

    int index = 0;
    string output;
    vector<string> ans;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    letterCombinations(digit, index, output, mapping, ans);

    cout << "[ ";
    for (string str : ans)
    {
        cout << "[" << str << "], ";
    }
    cout << "]";
    cout << endl;

    return 0;
}