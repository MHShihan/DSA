#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    // Is Empty
    bool isEmpty()
    {
        return front == nullptr;
    }

    // Enqueue
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue
    int dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            int ans = front->data;
            Node *temp = front;
            front = front->next;

            if (front == nullptr)
            {
                rear = nullptr;
            }

            free(temp);
            return ans;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << endl;
    }

    int size()
    {
        Node *temp = front;
        int size = 0;

        while (temp != nullptr)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    cout << "Size - " << q.size() << endl;

    q.dequeue();
    q.display();
    cout << "Size - " << q.size() << endl;

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    q.display();
    cout << "Size - " << q.size() << endl;

    return 0;
}