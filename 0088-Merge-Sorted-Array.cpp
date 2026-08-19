#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    vector<int> temp;
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            temp.push_back(nums1[i]);
            i++;
        }
        else
        {
            temp.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        temp.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        temp.push_back(nums2[j]);
        j++;
    }

    for (int k = 0; k < m + n; k++)
    {
        nums1[k] = temp[k];
    }
}

int main()
{
    int m, n;
    cout << "Enter m and n : ";
    cin >> m >> n;

    cout << "Enter nums1 elements : ";
    vector<int> nums1(m + n);
    for (int i = 0; i < m + n; i++)
    {
        cin >> nums1[i];
    }
    cout << "Enter nums2 elements : ";
    vector<int> nums2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);
    cout << "Merged Array : ";
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}