#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

Node *convertArrayTo2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print2DLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print2DLLInRevere(Node *head)
{
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    while (tail != nullptr)
    {
        cout << tail->data << " ";
        tail = tail->back;
    }
    cout << endl;
}

Node *insertBeforeHead(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);

    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;

    return newHead;
}

int main()
{

    vector<int> arr = {2, 4, 6, 8};
    Node *head = convertArrayTo2DLL(arr);

    head = insertBeforeHead(head, 100);

    print2DLL(head);
    print2DLLInRevere(head);

    return 0;
}