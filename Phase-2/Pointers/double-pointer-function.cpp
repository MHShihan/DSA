#include <iostream>
using namespace std;

void update(int **p2)
{
    // make change or not --> No change
    // p2 = p2 + 1;

    // *p2 = *p2 + 1;
    // make change or not --> YES

    **p2 = **p2 + 1;
    // YES
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;

    update(p2);

    cout << endl;
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;

    return 0;
}