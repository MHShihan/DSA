#include <bits/stdc++.h>
#include <vector>

using namespace std;

void createSieve(int limit, vector<int> &prime)
{
    vector<bool> primes(limit + 1, true);

    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= limit; i++)
    {
        if (primes[i])
        {
            for (int j = i * 2; j <= limit; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for (int i = 2; i < primes.size(); i++)
    {
        if (primes[i])
            prime.push_back(i);
    }
}

// Segmented Sieve
void segmentedSieve(long long l, long long r)
{
    int limit = sqrt(r);
    vector<int> prime;

    // Step 1:  generate all primes till sqrt(r)
    createSieve(limit, prime);

    // Step 2: Create a dummy array size of (r-l+1) and mark that with true
    if (l == 1)
        l += 1;
    vector<bool> isPrime(r - l + 1, true);

    // Step 3: Mark multiples of prime in range (r-l) on isPrime
    for (int pr : prime)
    {

        int firstMultiple = (l / pr) * pr;

        if (firstMultiple < l)
        {
            firstMultiple += pr;
        }

        for (int j = max(firstMultiple, pr * pr); j <= r; j += pr)
        {
            isPrime[j - l] = false;
        }
    }

    // Step 4: Get all primes
    int cnt = 0;

    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            // int primeNumber = l + i;
            // cout << primeNumber << " ";
            cnt++;
        }
    }

    cout << cnt;
}

int main()
{
    // int t;
    // cout << "Enter the input number: ";
    // cin >> t;

    // while (t--)
    // {
    //     int l, r;
    //     cin >> l >> r;

    // }

    long long l = 1;
    long long r = 1000000;

    segmentedSieve(l, r);

    return 0;
}