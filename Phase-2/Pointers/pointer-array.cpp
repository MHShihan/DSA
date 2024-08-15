#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {22, 41, 75, 101};

    cout << "Address of first memory block is " << arr << endl;
    cout << "Value at 0th index is " << arr[0] << endl;
    cout << "Address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr + 2) << endl;

    int i = 3;

    cout << arr[i] << " " << *(arr + i) << " " << i[arr] << " " << *(i + arr) << endl;

    int temp[10];
    cout << sizeof(temp) << endl;
    cout << "Temp1 " << sizeof(*temp) << endl;
    cout << "Temp2 " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    return 0;
}