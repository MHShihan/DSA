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

Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node *findKthNode(Node *temp, int k)
{
    k -= 1;
    while (temp != NULL && k > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

Node *kReverse(Node *head, int k)
{
    Node *temp = head;
    Node *prevNode = NULL;

    while (temp != NULL)
    {
        Node *kThNode = findKthNode(temp, k);
        if (kThNode == NULL)
        {
            if (prevNode)
                prevNode->next = temp;
            break;
        }

        Node *nextNode = kThNode->next;
        kThNode->next = NULL;
        reverseLinkedList(temp);

        if (temp == head)
        {
            head = kThNode;
        }
        else
        {
            prevNode->next = kThNode;
        }

        prevNode = temp;
        temp = nextNode;
    }

    return head;
}
