#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> n(5, 100);
    cout << "Print n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}