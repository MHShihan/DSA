#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int cnt, int size)
{
    if (cnt == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, cnt + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{

    int cnt = 0;
    solve(inputStack, cnt, N);
}