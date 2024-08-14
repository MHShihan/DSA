#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 7};

    cout << "Address of first memory block is " << arr << endl;
    cout << "Value at 0th index is " << arr[0] << endl;
    cout << "Address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;

    return 0;
}