#include <iostream>
#include <stack>
using namespace std;

bool operand(char ch)
{
    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

string prefixToPostfix(string &str)
{
    stack<string> st;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        char ch = str[i];
        if (operand(ch))
            st.push(string(1, ch));
        else
        {
            string t1 = st.top();
            st.pop();

            string t2 = st.top();
            st.pop();

            st.push(t1 + t2 + ch);
        }
    }
    return st.top();
}

int main()
{

    string str = "/-AB*+DEF";
    string ans = prefixToPostfix(str);

    cout << "ANS-> " << ans << endl;
    return 0;
}