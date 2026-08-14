#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> L(n);
    vector<int> R(n);

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        L[i] = product;
        product *= nums[i];
    }

    product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        R[i] = product;
        product *= nums[i];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = L[i] * R[i];
    }

    return ans;
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
    vector<int> ans = productExceptSelf(nums);
    cout << "Answer : ";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}