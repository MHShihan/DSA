#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "Is the number present or not : " << s.count(5) << endl;

    // find(), erase(), count(--) this three method's time complexity is O(n).

    return 0;
}