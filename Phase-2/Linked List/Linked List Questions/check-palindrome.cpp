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

int main()
{

    return 0;
}