#include <iostream>
using namespace std;

void printingCount(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    printingCount(n);

    return 0;
}