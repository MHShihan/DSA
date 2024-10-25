#include <bits/stdc++.h>
class CircularQueue
{
public:
    int start;
    int end;
    int curSize;
    int size;
    int *arr;

    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        start = -1;
        end = -1;
        curSize = 0;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        if (curSize == size)
        {
            return false;
        }

        if (curSize == 0)
        {
            start = end = 0;
        }
        else
        {
            end = (end + 1) % size;
        }

        curSize++;
        arr[end] = value;

        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        if (start == -1)
        {
            return -1;
        }

        int ans = arr[start];

        if (curSize == 1)
        {
            start = end = -1;
        }
        else
        {
            start = (start + 1) % size;
        }
        curSize--;

        return ans;
    }
};