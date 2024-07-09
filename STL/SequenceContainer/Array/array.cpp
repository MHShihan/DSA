#include <iostream>
#include <array>
using namespace std;

int main()
{
    // general array
    int arr[4] = {1, 2, 3, 4};

    // STL array
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << "Element at second index --> " << a.at(2) << endl;
    // return boolean value(true/false)
    cout << "Empty or Not --> " << a.empty() << endl;

    cout << "First Element --> " << a.front() << endl;
    cout << "Second Element --> " << a.back() << endl;

    return 0;
}