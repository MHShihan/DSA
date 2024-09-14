#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Class B" << endl;
    }
};

class C : public B
{
public:
    void func3()
    {
        cout << "Class C" << endl;
    }
};

int main()
{
    C obj;
    obj.func1();

    return 0;
}