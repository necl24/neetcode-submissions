class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numstoindex;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numstoindex.count(complement)) {
                return {numstoindex[complement],i};
            } else {
                numstoindex[nums[i]] = i;
            }
        }
        return {};
        
    }
};
