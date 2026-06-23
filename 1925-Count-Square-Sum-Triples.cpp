#include <bits/stdc++.h>
using namespace std;
int countTriples(int n)
{
    double c;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            c = sqrt(i * i + j * j);
            if (c == (int)c && 1 <= c && c <= n)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Output : " << countTriples(n);
    return 0;
}