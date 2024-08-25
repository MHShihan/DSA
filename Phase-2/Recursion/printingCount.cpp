#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    // recursive relation
    print(n - 1);

    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter a integer value : ";
    cin >> n;

    print(n);

    return 0;
}