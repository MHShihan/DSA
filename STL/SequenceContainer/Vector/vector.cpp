#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size --> " << v.capacity() << endl;

    vector<int> a(5, 1);
    cout << "Print a" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    v.push_back(1);
    cout << "Size --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size --> " << v.capacity() << endl;

    v.push_back(4);
    cout << "Size --> " << v.capacity() << endl;

    v.push_back(5);
    cout << "Size --> " << v.capacity() << endl;
    cout << "Number of Element --> " << v.size() << endl;

    cout << "Element at 2nd index --> " << v.at(1) << endl;

    cout << "Front --> " << v.front() << endl;
    cout << "Back --> " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Before clear size --> " << v.size() << endl;
    v.clear();
    cout << "After clear size --> " << v.size() << endl;

    return 0;
}