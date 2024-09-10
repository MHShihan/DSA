#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    string language;

    int getAge()
    {
        return this->age;
    }

    void setAge(int n)
    {
        this->age = n;
    }
};

class Male : public Human
{
public:
    string country;

    void display()
    {
        cout << "Hello from Male class" << endl;
    }
};

main()
{
    Male obj1;
    obj1.setAge(23);
    cout << obj1.age << endl;

    obj1.display();

    return 0;
}