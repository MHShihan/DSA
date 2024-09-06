#include <iostream>
using namespace std;

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

int main()
{

    // STATIC ALLOCATION
    // Creating a instance of the Hero class
    Hero a;
    a.setLevel('A');
    cout << a.getLevel() << endl;
    cout << a.health << endl;

    // DYNAMIC ALLOCATION
    Hero *b = new Hero;
    (*b).setLevel('A');
    cout << (*b).getLevel() << endl;
    cout << (*b).health << endl;

    cout << b->getLevel() << endl;
    cout << b->health << endl;

    return 0;
}