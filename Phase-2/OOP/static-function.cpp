#include <iostream>
using namespace std;

class Hero
{
private:
public:
    // Static member
    static int timeToComplete;

    // Static Function
    static int random()
    {
        return timeToComplete;
    }
};

// Initializing static member
int Hero ::timeToComplete = 5;

int main()
{
    cout << Hero::timeToComplete << endl;

    cout << Hero::random() << endl;

    return 0;
}