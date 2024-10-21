#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *child;
    Node() : data(0), next(nullptr), child(nullptr) {};
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};

Node *merge(Node *first, Node *second)
{

    // If the first is NULL return second
    if (first == NULL)
    {
        second->next = nullptr;
        return second;
    }

    // If the second is NULL return first
    if (second == NULL)
    {
        first->next = nullptr;
        return first;
    }

    Node *merged = NULL;

    if (first->data < second->data)
    {
        merged = first;
        merged->child = merge(first->child, second);
    }
    else
    {
        merged = second;
        merged->child = merge(first, second->child);
    }
    merged->next = nullptr;
    return merged;
}

Node *mergeTwoLists(Node *list1, Node *list2)
{
    // Create a dummy node as a
    // placeholder for the result
    Node *dummyNode = new Node(-1);
    Node *res = dummyNode;

    // Merge the lists based on data values
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            res->child = list1;
            res = list1;
            list1 = list1->child;
        }
        else
        {
            res->child = list2;
            res = list2;
            list2 = list2->child;
        }
        res->next = NULL;
    }

    // Connect the remaining
    // elements if any
    if (list1)
    {
        res->child = list1;
    }
    else
    {
        res->child = list2;
    }

    // Break the last node's
    // link to prevent cycles
    if (dummyNode->child)
    {
        dummyNode->child->next = NULL;
    }

    return dummyNode->child;
}

Node *flattenLinkedList(Node *head)
{
    // Base case
    if (head == NULL || head->next == NULL)
        return head;

    Node *mergedHead = flattenLinkedList(head->next);
    head = merge(head, mergedHead);
    return head;
}
