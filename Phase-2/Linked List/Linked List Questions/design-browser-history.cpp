#include <iostream>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node *back;

public:
    Node(string &data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }

    Node(string &data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

class Browser
{
public:
    Node *current;

    Browser(string &homepage)
    {
        current = new Node(homepage);
    }

    void visit(string &url)
    {
        Node *newNode = new Node(url, nullptr, current);
        current->next = newNode;
        current = newNode;
    }

    string back(int steps)
    {
        while (steps)
        {
            if (current->back)
            {
                current = current->back;
            }
            else
            {
                break;
            }
            steps--;
        }
        return current->data;
    }

    string forward(int steps)
    {
        while (steps)
        {
            if (current->next)
            {
                current = current->next;
            }
            else
            {
                break;
            }
            steps--;
        }
        return current->data;
    }
};
