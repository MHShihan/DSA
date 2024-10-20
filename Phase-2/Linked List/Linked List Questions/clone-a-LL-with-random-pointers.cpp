#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;
    Node() : data(0), next(nullptr), random(nullptr) {};
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
    Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
};

void insertCopyInBetween(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *nextNode = temp->next;
        Node *copyNode = new Node(temp->data);

        copyNode->next = nextNode;
        temp->next = copyNode;

        temp = nextNode;
    }
}

void connectRandomNode(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *copyNode = temp->next;

        if (temp->random)
        {
            copyNode->random = temp->random->next;
        }
        else
        {
            copyNode->random = nullptr;
        }

        temp = temp->next->next;
    }
}

Node *getDeepCopyList(Node *head)
{
    Node *dummyNode = new Node(-1);
    Node *res = dummyNode;
    Node *temp = head;

    while (temp != NULL)
    {
        res->next = temp->next;
        temp->next = temp->next->next;

        res = res->next;
        temp = temp->next;
    }
    res->next = nullptr;

    return dummyNode->next;
}

Node *cloneLL(Node *head)
{
    insertCopyInBetween(head);
    connectRandomNode(head);

    return getDeepCopyList(head);
}