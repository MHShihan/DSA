#include <bits/stdc++.h>
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
        this->next = NULL;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *convertArr2LL(vector<int> &arr)
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

bool searchInLL(Node *head, int value)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
            return 1;

        temp = temp->next;
    }

    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = convertArr2LL(arr);
    bool result = searchInLL(head, 55);

    if (result)
    {
        cout << "The value found" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}