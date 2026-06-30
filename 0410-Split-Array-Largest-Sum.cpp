#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &nums, int n, int k, int mid)
{
    int count = 1;
    int subArraySum = 0;
    for (int i = 0; i < n; i++)
    {
        if (subArraySum + nums[i] <= mid)
        {
            subArraySum += nums[i];
        }
        else
        {
            count++;
            if (nums[i] > mid || count > k)
            {
                return false;
            }
            subArraySum = nums[i];
        }
    }
    return true;
}

int splitArray(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k > n)
        return -1;
    int start = 0;
    int end = accumulate(nums.begin(), nums.end(), 0);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(nums, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
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

    int k;
    cout << "Enter k : ";
    cin >> k;

    cout << "output : " << splitArray(v, k);
    cout << endl;
    return 0;
}