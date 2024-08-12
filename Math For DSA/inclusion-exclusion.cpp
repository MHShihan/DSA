#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int cnt1 = n / a;
    int cnt2 = n / b;

    int cnt3 = n / (a * b);

    return cnt1 + cnt2 - cnt3;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    cout << divisible(n, a, b) << endl;

    return 0;
}