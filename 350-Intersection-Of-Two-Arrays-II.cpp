#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        vector<int> v;
        while(i < nums1.size() && j < nums2.size()){
            if (nums1[i] < nums2[j]){
                i++;
            }
            else if (nums1[i] == nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                j++;
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