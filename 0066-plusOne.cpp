#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> digits;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        digits.push_back(x);
    }

    vector<int> ans = plusOne(digits);

    cout << "Output : ";
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}