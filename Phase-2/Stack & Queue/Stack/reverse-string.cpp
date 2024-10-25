#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<char> s;
    string str = "Shihan";

    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";

    while (!s.empty())
    {
        char top = s.top();
        ans.push_back(top);

        s.pop();
    }

    cout << ans << endl;

    return 0;
}