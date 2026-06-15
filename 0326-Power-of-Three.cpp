#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n){
    long long i = 1;
    while (i < n){
        i = i * 3;
    }
    return i == n;
}
int main(){
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    if (isPowerOfThree(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}