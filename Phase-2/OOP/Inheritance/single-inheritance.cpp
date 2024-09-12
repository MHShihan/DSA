#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "CLASS A" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "CLASS B" << endl;
    }
};

int main()
{
    B obj;
    obj.A ::func1();
    obj.func2();

    return 0;
}