#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
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

bool isPalindromeBruteForceApproach(Node *head)
{
    stack<int> st;
    Node *temp = head;

    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        if (temp->data != st.top())
        {
            return false;
        }
        st.pop();
        temp = temp->next;
    }

    return true;
}

Node *reverseLinkedList(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = reverseLinkedList(head->next);

    Node *front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newHead = reverseLinkedList(slow->next);

    Node *first = head;
    Node *second = newHead;
    while (second != NULL)
    {
        if (first->data != second->data)
        {
            reverseLinkedList(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }

    reverseLinkedList(newHead);
    return true;
}

int main()
{

    return 0;
}