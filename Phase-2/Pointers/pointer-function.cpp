#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

void update(int *p)
{

    (*p)++;
    cout << "Update --> " << *p << endl;
}

int main()
{
    int value = 10;
    cout << "Value --> " << value << endl;

    int *p = &value;

    print(p);
    update(p);
    update(p);
    update(p);

    cout << "Value --> " << value << endl;

    return 0;
}