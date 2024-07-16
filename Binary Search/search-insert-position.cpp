#include <iostream>
#include <vector>
using namespace std;

int searchInsert(int nums[], int target, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }

        if (target > nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}

int main()
{
    int nums[4] = {1, 3, 5, 6};
    cout << "Position: " << searchInsert(nums, 7, 4);
    return 0;
}
