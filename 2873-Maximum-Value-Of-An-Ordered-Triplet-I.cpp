#include <bits/stdc++.h>
using namespace std;
long long maximumTripletValue(vector<int> &nums)
{
    long long ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                ans = max(ans, (1LL * (nums[i] - nums[j]) * nums[k]));
            }
        }
    }
    if (ans < 0)
        return 0;
    return ans;
}

int main(){
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

    cout << "Output : " << maximumTripletValue(v);
    return 0;
}