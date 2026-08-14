#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 1;
    vector<int> temp;
    temp.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            k++;
            temp.push_back(nums[i]);
        }
    }
    for (int i = 0; i <= k; i++)
    {
        nums[i] = temp[i];
    }
    return k;
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

    int k = removeDuplicates(nums);
    cout << "Answer : " << k << endl;
    cout << "Output Array : ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}