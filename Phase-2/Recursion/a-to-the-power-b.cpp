#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // RECURSIVE CALL
    int ans = power(a, b / 2);

    // PROCESSING
    if (b & 1)
    {
        // ODD case
        return a * ans * ans;
    }

    else
    {
        // EVEN case
        return ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;

    return 0;
}