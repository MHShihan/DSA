#include <bits/stdc++.h>
using namespace std;

class Deque
{
public:
    // Initialize your data structure.
    int front;
    int rear;
    int size;
    int *arr;
    int curSize;

    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
        curSize = 0;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if (curSize == size)
        {
            return false;
        }

        if (curSize == 0)
        {
            front = rear = 0;
        }
        else
        {
            front = (front - 1 + size) % size;
        }
        arr[front] = x;
        curSize++;

        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if (curSize == size)
        {
            return false;
        }

        if (curSize == 0)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
        curSize++;

        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (curSize == 0)
        {
            return -1;
        }

        int ans = arr[front];

        if (curSize == 1)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }

        curSize--;

        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if (curSize == 0)
        {
            return -1;
        }

        int ans = arr[rear];

        if (curSize == 1)
        {
            front = rear = -1;
        }
        else
        {
            rear = (rear - 1 + size) % size;
        }

        curSize--;

        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (curSize == 0)
            return -1;

        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (curSize == 0)
            return -1;

        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        return curSize == 0;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        return curSize == size;
    }
};