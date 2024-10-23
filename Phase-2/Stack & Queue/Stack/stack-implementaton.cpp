#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overFlow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            arr[top] = 0;
            size--;
            top--;
        }
        else
            cout << "Stack is empty." << endl;
    }

    int peak()
    {
        if (top >= 0)
            return arr[top];
        else
            cout << "Stack is empty" << endl;
        return -1;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << "Top -> " << st.peak() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout << "Top -> " << st.peak() << endl;

    if (st.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}