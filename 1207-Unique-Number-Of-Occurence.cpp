#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurences(vector<int> &arr){
    sort(arr.begin(), arr.end());

    int i = 0;
    vector<int> v;
    while(i < arr.size()){
        int count = 1;
        for(int j = i + 1; j < arr.size(); j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
        v.push_back(count);
        i = i + count;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; i++){
        if (v[i] == v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr;
    int x;
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }


    bool answer = uniqueOccurences(arr);
    if (answer == 1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;

}