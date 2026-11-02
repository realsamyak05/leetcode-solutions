#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (!isalnum(s[i]))
        {
            i++;
        }
        else if (!isalnum(s[j]))
        {
            j--;
        }

        else if (tolower(s[i]) == tolower(s[j]))
        {
            i++, j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    if (isPalindrome(s))
    {
        cout << s << " is a PALINDROME.";
    }
    else
    {
        cout << s << " is NOT a PALINDROME.";
    }
    return 0;
}