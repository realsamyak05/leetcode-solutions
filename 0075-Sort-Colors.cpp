#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
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

    sortColors(v);

    cout << "output: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}