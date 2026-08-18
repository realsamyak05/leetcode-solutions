#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> map(10001, -1);
    stack<int> st;
    int n = nums2.size();
    int m = nums1.size();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= nums2[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            map[nums2[i]] = st.top();
        }
        st.push(nums2[i]);
    }

    vector<int> ans(m);
    for (int i = 0; i < m; i++)
    {
        ans[i] = map[nums1[i]];
    }
    return ans;
}

int main()
{
    int m;
    cout << "Enter m : ";
    cin >> m;
    int n;
    cout << "Enter n :";
    cin >> n;
    vector<int> nums1(n), nums2(m);
    cout << "Enter elements of array nums2 : ";

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2[i] = x;
    }

    cout << "Enter elements of array nums1 : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1[i] = x;
    }

    vector<int> ans = nextGreaterElement(nums1, nums2);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}