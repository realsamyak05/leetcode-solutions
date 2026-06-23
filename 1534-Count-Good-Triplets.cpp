#include <bits/stdc++.h>
using namespace std;
int countGoodTriplets(vector<int> &arr, int a, int b, int c)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
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
    int a, b, c;
    cout << "Enter a, b and c : ";
    cin >> a >> b >> c;

    cout << "Output : " << countGoodTriplets(v, a, b, c);
    return 0;
}