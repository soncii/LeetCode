#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, bool> dict;
    for (int i = 0; i < nums.size(); i++) {
        dict[nums[i]] = true;
        if (dict[target - nums[i]]) {
            vector<int> res;
            res.push_back(nums[i]);
            res.push_back(target-nums[i]);
            return res;
        }
    }
}
int main() {
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums2.push_back(2);
    nums2.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    merge(nums1, 1, nums2, 2);
    for (int i = 0; i < 3; i++) {
        cout << nums1[i];
    }
}