#include <iostream>
using namespace std;

#define PI 3.1416

#define SQUARE(n) (n * n)

int main()
{
    int r = 5;

    int n = 7;
    int result = SQUARE(n);

    double area = PI * r * r;

    cout << area << endl;
    cout << "Square of " << n << " is " << result << endl;

    return 0;
}