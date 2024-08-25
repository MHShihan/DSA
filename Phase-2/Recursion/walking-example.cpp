#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    // base case
    if (src == dest)
    {
        cout << "Reached Home!!!" << endl;
        return;
    }

    // Processing --> 1 stem ahead
    src++;

    // recursive call
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}