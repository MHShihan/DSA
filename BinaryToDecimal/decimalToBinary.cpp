#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a decimal number: ";
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;

        answer = (bit * pow(10, i)) + answer;
        cout << "Ans---------: " << answer << endl;

        n = n >> 1;
        i++;
    }

    cout << "Answer: " << answer;

    return 0;
}