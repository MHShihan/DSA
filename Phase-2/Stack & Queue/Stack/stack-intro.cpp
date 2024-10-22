#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // Push operation
    s.push(1);
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Print stack top element " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is " << s.size() << endl;

    return 0;
}