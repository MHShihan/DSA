#include <iostream>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "Enter a power of two(2): ";
    cin >> n;

    cout << "2 to the power of " << n << " is " << power(n) << endl;

    return 0;
}