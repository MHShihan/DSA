#include <iostream>
using namespace std;

class Student
{
private:
    int age;
    string name;
    string batch;

public:
    void setInfo(int age, string name, string batch)
    {
        this->age = age;
        this->name = name;
        this->batch = batch;
    }

    int getInfo()
    {
        return this->age;
    }
};

int main()
{
    Student student;
    student.setInfo(23, "Shihan", "56-B");

    cout << student.getInfo() << endl;

    return 0;
}