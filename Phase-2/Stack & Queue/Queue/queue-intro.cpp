#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();

    cout << "Front ->" << q.front() << endl;
    cout << "Rear ->" << q.back() << endl;

    if (q.empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}