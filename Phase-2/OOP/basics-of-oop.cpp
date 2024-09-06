#include <iostream>
using namespace std;

struct Person
{
    string name = "Shihan";
    int age = 23;
    string sex = "Male";
};

class Hero
{
    // Properties
private:
    char level = 'x';

public:
    int health = 100;

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

int main()
{
    // Creating a instance of the Hero class
    // STATIC ALLOCATION
    Hero obj;
    obj.setLevel('A');
    cout << obj.getLevel() << endl;
    cout << obj.health << endl;

    Person p;
    cout << p.name << " " << p.age << " " << p.sex << endl;

    return 0;
}