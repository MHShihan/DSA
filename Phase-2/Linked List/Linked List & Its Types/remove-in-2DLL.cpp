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

int main()
{
    vector<int> arr = {2, 4, 6, 8};
    Node *head = convertArrayTo2DLL(arr);
    head = deleteHead(head);
    print2DLL(head);
    return 0;
}