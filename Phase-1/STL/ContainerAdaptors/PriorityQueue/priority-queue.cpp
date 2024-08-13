#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max heap
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(6);
    mini.push(7);
    mini.push(8);
    mini.push(9);
    mini.push(10);

    int m = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty or not -> " << maxi.empty() << endl;
    cout << "Empty or not -> " << mini.empty() << endl;

    return 0;
}