#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int> &nums){
    sort(nums.begin(), nums.end());
    vector<int> v;
    for(int i = 0; i < nums.size() - 1; i++){
        if (nums[i] == nums[i+1]){
            v.push_back(nums[i]);
        }
    }
    return v;
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

    vector<int> v = findDuplicate(arr);

    cout << "Duplicate Elements : ";

    for(auto it : v){
        cout << it << " ";
        }

    return 0;
}