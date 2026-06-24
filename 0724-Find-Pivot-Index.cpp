#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        rightSum -= nums[i];
        if (leftSum == rightSum)
            return i;
        leftSum += nums[i];
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

    cout << "output : " << pivotIndex(v);
    cout << endl;
    return 0;
}