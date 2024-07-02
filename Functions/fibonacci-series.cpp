#include <iostream>
using namespace std;

void fibonacciSeries(int n)
{
    int a = 0, b = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 0 << " ";
        }
        else if (i == 2)
        {
            cout << 1 << " ";
        }
        else
        {
            int nextNum = a + b;
            cout << nextNum << " ";

            a = b;
            b = nextNum;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacciSeries(n);

    return 0;
}