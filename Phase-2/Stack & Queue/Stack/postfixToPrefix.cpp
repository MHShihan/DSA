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

string postfixToPrefix(string &str)
{
    stack<string> st;

    for (int i = 0; i < str.length(); i++)
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

            st.push(ch + t2 + t1);
        }
    }
    return st.top();
}

int main()
{

    string str = "AB-DE+F*/";
    string ans = postfixToPrefix(str);

    cout << "ANS-> " << ans << endl;
    return 0;
}