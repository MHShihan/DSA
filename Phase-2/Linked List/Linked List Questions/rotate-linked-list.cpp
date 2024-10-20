#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *findNthNode(Node *head, int k)
{
    Node *temp = head;
    while (temp != NULL && k - 1 > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

Node *rotate(Node *head, int k)
{
    if (head == NULL || k == 0)
        return head;

    int length = 1;
    Node *tail = head;

    while (tail->next != NULL)
    {
        length++;
        tail = tail->next;
    }

    if (k % length == 0)
        return head;

    k = k % length;
    tail->next = head;

    Node *newLastNode = findNthNode(head, length - k);
    head = newLastNode->next;
    newLastNode->next = nullptr;

    return head;
}