#include <bits/stdc++.h>
using namespace std;

vector<int> findNGE(vector<int> &arr)
{
    stack<int> st;
    vector<int> nge(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        if (st.empty())
            nge[i] = -1;
        else
            nge[i] = st.top();

        st.push(arr[i]);
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
    vector<int> arr = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};

    vector<int> nge = findNGE(arr);
    printArray(nge);

    return 0;
}