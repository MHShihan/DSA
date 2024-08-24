#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    int smallProblem = factorial(n - 1);
    int bigProblem = n * smallProblem;

    return bigProblem;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n);

    return 0;
}