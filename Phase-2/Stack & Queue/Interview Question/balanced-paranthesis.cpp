#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParentheses(string &str)
{
    stack<char> st;
    if (str == "")
        return false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty())
                return false;

            if ((st.top() == '(') && (str[i] == ')') ||
                (st.top() == '{') && (str[i] == '}') ||
                (st.top() == '[') && (str[i] == ']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string str1 = "()[{}()]";
    string str2 = "()[{}(])";
    string str3 = "())";
    string str4 = "((((";
    string str5 = ")))))";
    string str6 = "";

    cout << isBalancedParentheses(str1) << endl;
    cout << isBalancedParentheses(str2) << endl;
    cout << isBalancedParentheses(str3) << endl;
    cout << isBalancedParentheses(str4) << endl;
    cout << isBalancedParentheses(str5) << endl;
    cout << isBalancedParentheses(str6) << endl;

    return 0;
}