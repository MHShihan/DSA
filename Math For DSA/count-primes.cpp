#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (primes[i])
        {
            cnt++;
            for (int j = i * 2; j < n; j = j + i)
            {
                primes[j] = false;
            }
        }
    }

    return cnt;
}

int main()
{
    int n = 1000000;
    cout << countPrimes(n);

    return 0;
}