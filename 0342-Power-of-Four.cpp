#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n){
    long long i = 1;
    while (i < n){
        i = i * 4;
    }
    return i == n;
}
int main(){
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    if (isPowerOfFour(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}