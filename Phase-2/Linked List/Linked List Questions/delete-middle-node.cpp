#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
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

Node *deleteMiddleBruteForce(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    int res = cnt / 2;
    temp = head;
    while (res)
    {
        res--;
        if (res == 0)
            break;

        temp = temp->next;
    }

    Node *middle = temp->next;
    temp->next = temp->next->next;
    delete middle;
    return head;
}

Node *deleteMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    fast = fast->next->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *middle = slow->next;
    slow->next = slow->next->next;
    delete middle;

    return head;
}
