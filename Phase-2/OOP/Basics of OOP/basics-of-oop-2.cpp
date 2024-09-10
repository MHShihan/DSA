#include <iostream>
using namespace std;

// Hero class
class Hero
{
    // Properties
private:
    char level = 'x';

public:
    int health = 100;

    // Creating constructor
    Hero()
    {
        cout << "Constructor is called" << endl;
    }

    // Getter method
    char getLevel()
    {
        return level;
    }
    // Setter method
    void setLevel(char ch)
    {
        level = ch;
    }
};

// Person class
class Person
{
private:
    int age;

public:
    string name;
    char sex;

    // Parameterized Constructor
    Person(string name, int age, char sex)
    {
        this->age = age;
        this->name = name;
        this->sex = sex;
    }

    // Getter method
    int getAge()
    {
        return age;
    }

    // Setter method
    void setAge(int age)
    {
        this->age = age;
    }
};

int main()
{
    // Static Allocation
    Person p("Shihan", 23, 'M');
    p.setAge(25);

    Person q(p);

    cout << p.name << endl;
    cout << p.getAge() << endl;
    cout << p.sex << endl;

    cout << "---------------" << endl;

    cout << q.name << endl;
    cout << q.getAge() << endl;
    cout << q.sex << endl;

    return 0;
}