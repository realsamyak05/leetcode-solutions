#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2){
    vector<int> v;
    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if (nums1[i] == nums2[j]){
                nums2[j] = INT_MIN;
                v.push_back(nums1[i]);
                break; 
            }
        }
    }
    return v;
}

int main(){
    int m, n;
    cout << "Enter number of elements in 1st and 2nd arrays : ";
    cin >> m >> n;

    vector<int> nums1;
    vector<int> nums2;
    int x;

    cout << "Enter elements of first array : ";
    for(int i = 0; i < m; i++){
        cin >> x;
        nums1.push_back(x);
    }

    cout << "Enter elements of second array : ";
    for(int j = 0; j < n; j++){
        cin >> x;
        nums2.push_back(x);
    }


    vector<int> v;
    v = intersect(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is : ";

    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}