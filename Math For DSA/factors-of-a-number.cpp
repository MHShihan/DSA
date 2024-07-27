#include <iostream>
using namespace std;

void factors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// More optimize way
void factorsOfNumber(int n)
{
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            cout << i << " ";

            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factors(n);
    factorsOfNumber(n);

    return 0;
}