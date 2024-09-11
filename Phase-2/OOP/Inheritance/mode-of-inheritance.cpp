#include <iostream>
using namespace std;

class Animal
{
private:
    void privateFunc()
    {
        cout << "PRIVATE FUNCTION OF ANIMAL CLASS" << endl;
    }

protected:
    void protectedFunc()
    {
        cout << "PROTECTED FUNCTION ANIMAL CLASS" << endl;
    }

public:
    string name;

public:
    void checkAnimal()
    {
        cout << "This is Animal Class" << endl;
    }
};

class Human : private Animal
{
public:
    void speaking()
    {
        cout << "Human Speaking" << endl;
    }
};

int main()
{
    Animal obj1;
    Human obj2;

    // obj2.checkAnimal();
    // obj2.name = "Animal Name";
    // cout << obj2.name << endl;
    // obj2.speaking();

    cout << "------------------" << endl;

    return 0;
}