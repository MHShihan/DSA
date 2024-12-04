#include <bits/stdc++.h>

using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    stack<int> st;

    for (int i = 0; i < asteroids.size(); i++)
    {
        if (asteroids[i] > 0)
        {
            st.push(asteroids[i]);
        }
        else
        {
            while (!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
            {
                st.pop();
            }

            if (!st.empty() && st.top() == abs(asteroids[i]))
            {
                st.pop();
            }
            else if (st.empty() || st.top() < 0)
            {
                st.push(asteroids[i]);
            }
        }
    }

    vector<int> res(st.size());
    int j = st.size() - 1;
    while (!st.empty())
    {
        res[j--] = st.top();
        st.pop();
    }
}

int main()
{
    return 0;
}
