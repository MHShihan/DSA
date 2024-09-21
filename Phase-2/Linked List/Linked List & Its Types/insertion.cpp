#include <iostream>
#include <vector>
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
        this->next = NULL;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *convertArray2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertHead(Node *head, int value)
{
    // Node *newHead = new Node(value, head);
    return new Node(value, head);
}

Node *insertTail(Node *head, int value)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // Node *newTail = new Node(value);
    temp->next = new Node(value);
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8};
    Node *head = convertArray2LL(arr);

    head = insertHead(head, 100);
    insertTail(head, 200);

    printLL(head);

    return 0;
}