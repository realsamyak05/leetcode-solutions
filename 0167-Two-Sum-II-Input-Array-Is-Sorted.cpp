#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    int i = 0, j = nums.size() - 1;
    vector<int> ans;
    while(i < j){
        if (nums[i] + nums[j] < target){
            i++;
        }
        else if (nums[i] + nums[j] > target){
            j--;
        }
        else{
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target : ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    cout << "Output : " << ans[0] << ", " << ans[1] << endl;
    return 0;
}