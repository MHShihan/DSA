#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

double findMedianSortedArraysApproach1(vector<int> &num1, vector<int> &num2)
{

    int s1 = num1.size();
    int s2 = num2.size();

    vector<int> temp;

    for (int i = 0; i < s1; i++)
    {
        temp.push_back(num1[i]);
    }

    for (int i = 0; i < s2; i++)
    {
        temp.push_back(num2[i]);
    }

    int s = temp.size();

    bubbleSort(temp, s);

    if (s & 1)
    {
        int mid = s / 2;

        return temp[mid];
    }
    else
    {
        int mid1 = s / 2;
        int mid2 = s / 2 - 1;

        return (temp[mid1] + temp[mid2]) / 2.0;
    }
}

int main()
{
    vector<int> num1 = {1, 4, 6, 7, 9};
    vector<int> num2 = {2, 3, 5, 8, 10};

    cout << findMedianSortedArraysApproach1(num1, num2) << endl;

    return 0;
}