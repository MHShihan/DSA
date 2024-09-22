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
        this->next = nullptr;
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

Node *removeHead(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node *removeTail(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == nullptr)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }

    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeElement(Node *head, int element)
{
    if (head == nullptr)
        return head;

    if (head->data == element)
    {
        Node *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = nullptr;
    while (temp)
    {
        if (temp->data == element)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8};
    Node *head = convertArray2LL(arr);

    // head = removeHead(head);
    // cout << head->data << endl;

    // head = removeTail(head);
    // head = removeK(head, 10);
    head = removeElement(head, 6);
    printLL(head);
    return 0;
}