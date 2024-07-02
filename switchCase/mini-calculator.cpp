#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operator(+, -, *, /, %): ";
    cin >> op;
    cout << endl;

    switch (op)
    {
    case '+':
        cout << "The summation of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "The subtraction  of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "The multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "The division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
        break;
    case '%':
        cout << "The modulus of " << num1 << " and " << num2 << " is: " << num1 % num2 << endl;
        break;
    default:
        cout << "Invalid Operator! Try again." << endl;
    }

    return 0;
}