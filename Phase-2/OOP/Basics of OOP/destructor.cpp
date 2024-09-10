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

    // Destructor
    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{

    // Static Allocation
    Hero a;

    // Dynamic Allocation
    Hero *b = new Hero();

    delete b;

    return 0;
}