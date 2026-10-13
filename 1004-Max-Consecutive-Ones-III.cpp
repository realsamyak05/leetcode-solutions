#include <iostream>
#include <vector>
using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int start = 0, end = 0, maxLen = 0, zeros = 0;

    while (end < n)
    {
        if (nums[end] == 0)
        {
            zeros++;
        }

        while (zeros > k)
        {
            if (nums[start] == 0)
            {
                zeros--;
            }
            start++;
        }

        maxLen = max(maxLen, (end - start + 1));
        end++;
    }
    return maxLen;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter k : ";
    cin >> k;

    cout << "Max number of 1s after k flips : " << longestOnes(nums, k) << endl;
    return 0;
}