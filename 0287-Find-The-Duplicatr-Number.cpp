#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums){
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size() - 1; i++){
        if (nums[i] == nums[i + 1]) return nums[i];
    }
    return 0;
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

    cout << "Unique Element is : " << findDuplicate(arr);

    return 0;

}