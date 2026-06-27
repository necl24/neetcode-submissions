class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nums_to_count;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (nums_to_count.count(complement)) {
                return {nums_to_count[complement],i};
            } else {
                nums_to_count[nums[i]] = i;
            }
        }
        return {};
        
    }
};
