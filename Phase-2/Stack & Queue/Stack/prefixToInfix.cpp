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

string prefixToInfix(string &str)
{
    stack<string> st;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (operand(str[i]))
        {
            st.push(string(1, str[i]));
        }
        else
        {
            string t1 = st.top();
            st.pop();

            string t2 = st.top();
            st.pop();

            string con = '(' + t1 + str[i] + t2 + ')';
            st.push(con);
        }
    }
    return st.top();
}

int main()
{
    string str = "*+PQ-MN";
    string ans = prefixToInfix(str);

    cout << "ANS-> " << ans << endl;

    return 0;
}