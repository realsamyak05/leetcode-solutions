#include <iostream>
#include <vector>

using namespace std;

int setBitCount(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    vector<int> temp;
    while (i <= mid && j <= high)
    {
        int bitsI = setBitCount(arr[i]);
        int bitsJ = setBitCount(arr[j]);
        if ((bitsI < bitsJ) || (bitsI == bitsJ && arr[i] < arr[j]))
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= high)
    {
        temp.push_back(arr[j++]);
    }
    for (int t = low; t <= high; t++)
    {
        arr[t] = temp[t - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
vector<int> sortByBits(vector<int> &arr)
{
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    return arr;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortByBits(nums);

    cout << "After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}