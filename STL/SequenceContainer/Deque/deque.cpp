#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "Print d" << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    // d.pop_front();
    // d.pop_back();

    cout << "First index element -> " << d.at(0) << endl;

    cout << "Front-> " << d.front() << endl;
    cout << "Back-> " << d.back() << endl;

    cout << "Empty or Not -> " << d.empty() << endl;

    cout << "Before erase size -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Before erase size -> " << d.size() << endl;

    cout << "Print d" << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}