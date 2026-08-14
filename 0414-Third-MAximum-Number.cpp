#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int> &nums)
{
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > first)
        {
            first = nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > second && nums[i] < first)
        {
            second = nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++)

    {
        if (nums[i] > third && nums[i] < second && nums[i] < first)
        {
            third = nums[i];
        }
    }

    if (third == LONG_MIN)
    {
        return first;
    }
    return third;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Third Maximum Element in this array is " << thirdMax(nums) << endl;
    return 0;
}