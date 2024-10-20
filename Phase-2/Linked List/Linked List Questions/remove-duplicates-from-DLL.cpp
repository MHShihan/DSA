#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node *removeDuplicates(Node *head)
{
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (temp->prev->data == temp->data)
        {
            Node *prevNode = temp->prev;
            Node *nextNode = temp->next;

            prevNode->next = nextNode;
            if (nextNode)
                nextNode->prev = prevNode;

            free(temp);
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

Node *removeDuplicates2ndApproach(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next;

        while (nextNode != NULL && nextNode->data == temp->data)
        {
            Node *duplicate = nextNode;
            nextNode = nextNode->next;
            free(duplicate);
        }

        temp->next = nextNode;
        if (nextNode)
            nextNode->prev = temp;
        temp = temp->next;
    }
    return head;
}
