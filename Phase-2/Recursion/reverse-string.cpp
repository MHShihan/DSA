#include <iostream>
using namespace std;

// using loop
string revString(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }

    return str;
}

string reverseString(string str, int s, int e)
{
    // base case
    if (s > e)
        return str;

    swap(str[s++], str[e--]);

    return reverseString(str, s, e);
}

int main()
{
    string str = "hello everyone";
    int s = 0;
    int e = str.length() - 1;

    cout << reverseString(str, s, e) << endl;

    return 0;
}