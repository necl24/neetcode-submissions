class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numstocount;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numstocount.count(complement)) {
                return {numstocount[complement],i};
            } else {
                numstocount[nums[i]] = i;
            }
        }
        return {};
        
    }
};
