#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Mahmudul");
    q.push("Hasan");
    q.push("Shihan");

    cout << "Size before pop -> " << q.size() << endl;

    cout << "First element -> " << q.front() << endl;
    q.pop();
    cout << "First element -> " << q.front() << endl;

    cout << "Size before pop -> " << q.size() << endl;

    return 0;
}