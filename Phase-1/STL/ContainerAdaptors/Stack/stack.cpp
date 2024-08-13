#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("mahmudul");
    s.push("hasan");
    s.push("shihan");

    cout << "Top element -> " << s.top() << endl;

    s.pop();
    cout << "Top element -> " << s.top() << endl;

    cout << "Size of stack -> " << s.size() << endl;
    cout << "Empty or Not -> " << s.empty() << endl;

    return 0;
}