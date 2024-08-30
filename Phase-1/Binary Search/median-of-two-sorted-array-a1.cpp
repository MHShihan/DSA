#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr1, int m, vector<int> &arr2, int n, vector<int> &arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy the remaining element of first array
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }

    // copy the remaining element of second array
    while (j < n)
    {
        arr3[k++] = arr1[j++];
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

    merge(num1, s1, num2, s2, temp);

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