#include <iostream>
#include <stack>
using namespace std;

void reverse(string &str)
{
    int i = 0;
    int j = str.length() - 1;

    while (i <= j)
    {
        swap(str[i], str[j]);

        if (str[i] == '(')
            str[i] = ')';
        else if (str[i] == ')')
            str[i] = '(';

        if (str[j] == '(')
            str[j] = ')';
        else if (str[j] == ')')
            str[j] = '(';

        i++;
        j--;
    }
}

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

string infixToPrefix(string &str)
{
    int i = 0;
    int n = str.length();

    stack<char> st;
    string ans = "";

    reverse(str);

    while (i < n)
    {
        char ch = str[i];

        if (operand(ch))
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

            if (ch == '^')
            {
                while (!st.empty() && priority(ch) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
            else
            {
                while (!st.empty() && priority(ch) < priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans);

    return ans;
}

int main()
{
    string str = "a+b*(c^d-e)";
    // string str = "(A+B)*C-D+F";
    string ans = infixToPrefix(str);

    cout << "ANS-> " << ans << endl;

    return 0;
}
