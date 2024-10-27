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

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

// Covert an array into linked list
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

// Count Node of LL

int countNode(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

// Traverse into a linked list
void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *kthNode(Node *temp, int k)
{
    k -= 1;
    while (temp != NULL && k > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

int main()
{
    vector<int> arr = {2, 5, 8, 9};

    Node *head = convertArr2LL(arr);

    cout << head->data << endl;
    printLL(head);

    cout << "Total Node: " << countNode(head) << endl;

    Node *temp = head;
    cout << "Temp --> " << temp->data << endl;
    Node *kth = kthNode(temp, 3);
    cout << "after kth --> " << temp->data << endl;
    cout << " kth --> " << kth->data;

    return 0;
}