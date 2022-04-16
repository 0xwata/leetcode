/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        v.reserve(2); // reserve more memory for 4 elements in advance.
        unordered_map<int, int> maps;
        for(int i=0; i<nums.size(); i++){
           int diff = target - nums[i];
           if(maps.find(diff) == maps.end()) {
            maps.insert(make_pair(nums[i], i));
           } else {
            v.push_back(i);
            v.push_back(maps[diff]);
           }
        }
        return v;
    }
};
// @lc code=end

