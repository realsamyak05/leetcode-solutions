#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums[i] > 0)
            break;
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1])
                {
                    left++;
                }
                while (left < right && nums[right] == nums[right + 1])
                {
                    right--;
                }
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
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
    cout << "Enter elements: ";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "output : " << endl;
    vector<vector<int>> ans = threeSum(v);
    for (auto i : ans)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}