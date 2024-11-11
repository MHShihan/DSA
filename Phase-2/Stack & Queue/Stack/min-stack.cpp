#include <bits/stdc++.h>
using namespace std;

// APPROACH-1

class MinStackApp1
{

    // CONSTRUCTOR

    stack<pair<int, int>> st;

public:
    void push(int val)
    {
        if (st.empty())
        {
            st.push({val, val});
        }

        st.push({val, min(st.top().second, val)});
    }

    int pop()
    {
        int toppedEl = st.top().first;
        st.pop();
        return toppedEl;
    }

    int getMin()
    {
        return st.top().second;
    }

    int top()
    {
        return st.top().first;
    }
};

class MinStack
{
    stack<int> st;
    int min = INT_MAX;

public:
    void push(int val)
    {
        if (st.empty())
        {
            min = val;
            st.push(val);
        }

        if (val > min)
            st.push(val);
        else
        {
            st.push(2 * val - min);
            min = val;
        }
    }

    void pop()
    {
        if (st.empty())
            return;

        int poppedEl = st.top();
        st.pop();

        if (poppedEl < min)
        {
            min = 2 * min - poppedEl;
        }
    }

    int top()
    {
        if (st.empty())
            return -1;

        int x = st.top();
        if (x > min)
            return x;

        return min;
    }

    int getMin()
    {
        if (min != INT_MAX)
            return min;
    }
};

int main()
{
    MinStack minSt;

    minSt.push(12);
    minSt.push(15);
    minSt.push(10);

    cout << minSt.top() << endl;
    cout << minSt.getMin() << endl;

    minSt.pop();

    cout << minSt.top() << endl;
    cout << minSt.getMin() << endl;

    return 0;
}