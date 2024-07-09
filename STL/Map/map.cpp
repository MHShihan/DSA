#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Mahmudul";
    m[10] = "Shihan";
    m[2] = "Hasan";

    m.insert({5, "MHS"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 10 -> " << m.count(10) << endl;

    m.erase(10);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // ther is another method which is "find()". If needed I have to learn this method

    return 0;
}