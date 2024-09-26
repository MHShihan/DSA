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

Node *deleteHead(Node *head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return NULL;
    }

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
}

Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *newTail = head;

    while (newTail->next != nullptr)
    {
        newTail = newTail->next;
    }
    Node *prev = newTail->back;
    prev->next = nullptr;
    newTail->back = nullptr;
    delete newTail;

    return head;
}

Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        if (cnt == k)
            break;

        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == nullptr && front == nullptr)
    {
        delete head;
        return NULL;
    }
    else if (prev == nullptr)
    {
        head = deleteHead(head);
        return head;
    }
    else if (front == nullptr)
    {
        deleteTail(head);
        return head;
    }

    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete temp;

    return head;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8};
    Node *head = convertArrayTo2DLL(arr);

    // head = deleteHead(head);

    // head = deleteTail(head);

    head = deleteKthElement(head, 3);

    print2DLL(head);
    print2DLLInRevere(head);
    return 0;
}