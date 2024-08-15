#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[9] = "abcdefgh";

    cout << arr << endl;

    // print entire character type array
    cout << ch << endl;

    char *c = &ch[0];
    // print entire string. Every character type array has 0 in the last index of the array.
    cout << c << endl;

    char temp = 'z';
    char *ptr = &temp;

    cout << ptr << endl;

    return 0;
}