#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    long long i = 1;
    while (i < n){
        i = i * 2;
    }
    return i == n;
}
int main(){
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    if (isPowerOfTwo(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}