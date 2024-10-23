#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int element)
    {
        Node *newNode = new Node(element);
        newNode->next = top;
        top = newNode;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;

            temp->next = nullptr;
            delete temp;
        }
    }

    int peak()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Top -> " << st.peak() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << "Top -> " << st.peak() << endl;

    if (st.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}