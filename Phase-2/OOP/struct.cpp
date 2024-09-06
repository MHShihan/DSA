#include <iostream>
using namespace std;

struct Person
{
    string name = "Shihan";
    int age = 23;
    string sex = "Male";
};

int main()
{
    // STATIC ALLOCATION
    Person p;
    cout << p.name << " " << p.age << " " << p.sex << endl;

    // DYNAMIC ALLOCATION
    Person *q = new Person;
    cout << p.name << " " << (*q).age << " " << (*q).sex << endl;
    return 0;
}