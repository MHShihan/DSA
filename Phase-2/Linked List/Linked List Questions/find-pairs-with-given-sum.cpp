#include <iostream>
#include <vector>
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

Node *findTail(Node *head)
{
    Node *temp = head->next;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

vector<pair<int, int>> findPairs(Node *head, int k)
{

    vector<pair<int, int>> arr;
    Node *left = head;
    Node *right = findTail(head);

    while (left->data < right->data)
    {
        int leftData = left->data;
        int rightData = right->data;

        if ((leftData + rightData) == k)
        {
            arr.push_back({leftData, rightData});
            left = left->next;
            right = right->prev;
        }
        else if ((leftData + rightData) < k)
        {
            left = left->next;
        }
        else
        {
            right = right->prev;
        }
    }

    return arr;
}
