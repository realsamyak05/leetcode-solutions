#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{

    // let's find pivot element firstly...
    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int m = s + (e - s) / 2;

        if (nums[m] >= nums[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
    }

    // s has the idx of pivot element....
    if (target >= nums[s] && target <= nums[nums.size() - 1])
    {
        // BS in second line
        int start = s;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    else
    {
        // BS in first line
        int start = 0;
        int end = s - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter number of elements : ";
    cin >> n;

    vector<int> v;

    int x;
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int target;
    cout << "Enter target : ";
    cin >> target;

    cout << "output : " << search(v, target);
    cout << endl;
    return 0;
}