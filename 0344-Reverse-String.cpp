#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        swap(s[i++], s[j--]);
    }
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    reverseString(s);
    cout << "After reversing : " << s << endl;
    return 0;
}