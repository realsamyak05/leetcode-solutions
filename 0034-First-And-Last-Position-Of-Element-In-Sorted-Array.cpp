#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int a = -1;
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            a = mid;
            end = mid - 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    ans.push_back(a);
    a = -1;
    start = 0;
    end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            a = mid;
            start = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    ans.push_back(a);
    return ans;
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
    int a;
    cout << "Enter target: ";
    cin >> a;
    vector<int> ans = searchRange(v, a);

    cout << "First and Last Position of element in sorted array is : " << ans[0] << ", " << ans[1];

    return 0;
}