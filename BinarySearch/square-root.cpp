#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;

    long long int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int tempSol = sqrtInteger(n);

    cout << "Square Root of " << n << " is: " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}
