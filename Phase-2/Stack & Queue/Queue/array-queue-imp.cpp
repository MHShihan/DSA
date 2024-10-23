#include <iostream>
using namespace std;

#include <bits/stdc++.h>
class Queue
{
    int qFront;
    int rear;
    int *arr;
    int size;

public:
    Queue()
    {
        size = 10001;
        qFront = 0;
        rear = 0;
        arr = new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        return rear == qFront;
    }

    void enqueue(int data)
    {
        if (rear == size)
            cout << "Queue is not Empty" << endl;
        else
            arr[rear++] = data;
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        else
        {
            int ans = arr[qFront];
            arr[qFront++] = -1;
            if (qFront == rear)
            {
                qFront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (isEmpty())
            return -1;
        else
            return arr[qFront];
    }
};