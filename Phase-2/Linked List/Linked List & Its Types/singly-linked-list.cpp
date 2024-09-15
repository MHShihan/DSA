#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp->next;
        mover = temp;
    }

    return head;
}

int main()
{
    vector<int> arr = {112, 5, 8, 9};

    Node *head = convertArr2LL(arr);

    cout << head->data << endl;

    return 0;
}