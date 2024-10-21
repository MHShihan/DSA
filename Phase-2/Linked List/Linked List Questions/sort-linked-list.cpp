#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *mergeTwoLists(Node *list1, Node *list2)
{
    Node *dummyNode = new Node(-1);
    Node *res = dummyNode;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            res->next = list1;
            res = list1;
            list1 = list1->next;
        }
        else
        {
            res->next = list2;
            res = list2;
            list2 = list2->next;
        }
    }

    if (list1)
        res->next = list1;
    else
        res->next = list2;

    return dummyNode->next;
}

Node *sortLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *midNode = findMid(head);

    Node *right = midNode->next;
    midNode->next = nullptr;
    Node *left = head;

    left = sortLL(left);
    right = sortLL(right);

    return mergeTwoLists(left, right);
}
