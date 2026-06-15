#include <bits/stdc++.h>
int reverseInt(int n){
    int temp;
    int rev = 0;
    while(n != 0){
        temp = n % 10;
        if (rev < INT_MIN / 10 || rev > INT_MAX / 10){
            return 0;
        }
        rev = rev * 10 + temp;
        n = n / 10;
    }
    return rev;
}
using namespace std;
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = reverseInt(n);
    cout << "Your answer is " << result << endl;
    return 0;
}