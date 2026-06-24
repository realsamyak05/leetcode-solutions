#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 1;
    int end = arr.size() - 2;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
        }
    }
    return ans;
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

    cout << "output : " << peakIndexInMountainArray(v);
    cout << endl;
    return 0;
}