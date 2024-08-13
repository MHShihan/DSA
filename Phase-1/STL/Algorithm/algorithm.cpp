#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Finding 3 -> " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 11;
    int b = 12;
    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "Swapped value of a(11) -> " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String -> " << abcd << endl;

    // Rotate
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sort
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}