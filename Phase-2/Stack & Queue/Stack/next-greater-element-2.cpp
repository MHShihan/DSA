#include <bits/stdc++.h>
using namespace std;

vector<int> findNGE2(vector<int> &arr)
{
    int n = arr.size();
    vector<int> nge(n);
    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i % n])
        {
            st.pop();
        }

        if (i < n)
        {
            nge[i] = st.empty() ? -1 : st.top();
        }

        st.push(arr[i % n]);
    }
    return nge;
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 10, 12, 1, 11};

    vector<int> nge = findNGE2(arr);
    printArray(nge);

    return 0;
}