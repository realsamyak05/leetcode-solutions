#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
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
    cout << "Max Sum : " << maxSubArray(nums) << endl;
    return 0;
}