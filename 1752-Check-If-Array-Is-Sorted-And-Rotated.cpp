#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }

    if (nums[n - 1] > nums[0])
        count++;

    return count <= 1;
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

    int ans = check(nums);
    if (ans == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}