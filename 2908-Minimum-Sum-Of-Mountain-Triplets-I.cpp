#include <bits/stdc++.h>
using namespace std;
int minimumSum(vector<int> &nums)
{
    int ans = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] < nums[j] && nums[k] < nums[j])
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    ans = min(ans, sum);
                }
            }
        }
    }
    if (ans == INT_MAX)
        return -1;
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

    cout << "Output : " << minimumSum(v);
    return 0;
}