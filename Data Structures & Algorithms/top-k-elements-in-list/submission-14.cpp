class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for (int n : nums) {
            count[n]++;
        }
        vector<vector<int>> freq(nums.size()+1);

        for (const auto & pair : count) {
            freq[pair.second].push_back(pair.first);
        }
       vector<int> result;
        for (int i = nums.size(); i >= 0; i--) {
            for (int n : freq[i]) {
                    result.push_back(n);
                    if (result.size() == k) {
                        return result;
                    }
                }
            }

        return result;
        
    }
};
