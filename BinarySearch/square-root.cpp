#include <iostream>
using namespace std;

long long int floorSqrt(int n)
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

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sqrt = floorSqrt(n);
    cout << "Square Root: " << sqrt << endl;

    return 0;
}
