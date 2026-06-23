#include <bits/stdc++.h>
using namespace std;
int arithmeticTriplets(vector<int> &nums, int diff)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[k] - nums[j] == diff && nums[j] - nums[i] == diff)
                {
                    count++;
                }
            }
        }
    }
    return count;
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
    int diff;
    cout << "Enter diff : ";
    cin >> diff;

    cout << "Output : " << arithmeticTriplets(v, diff);
    return 0;
}