#include <bits/stdc++.h>
using namespace std;

vector<int> findNSE(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> nse(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        nse[i] = st.empty() ? -1 : st.top();

        st.push(arr[i]);
    }
    return nse;
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

    vector<int> arr = {5, 7, 9, 6, 7, 4, 5, 1, 3, 7};

    vector<int> nse = findNSE(arr);
    printArray(nse);

    return 0;
}