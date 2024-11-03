#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    return -1;
}

bool checkOperand(char ch)
{
    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

string infixToPostfix(string &str)
{
    int n = str.length();
    int i = 0;

    stack<char> st;
    string ans = "";

    while (i < n)
    {
        char ch = str[i];

        if (checkOperand(ch))
        {
            ans += ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && priority(ch) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string str = "a+b*(c^d-e)";
    string ans = infixToPostfix(str);

    cout << "ANS-> " << ans << endl;

    return 0;
}