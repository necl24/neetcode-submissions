class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        // Bucket array where index = frequency (max possible frequency is nums.size())
        vector<vector<int>> freq(nums.size() + 1);
        
        // 1. Count occurrences of each number
        for (int n : nums) {
            count[n]++;
        }
        
        // 2. Group numbers by their frequency
        for (const auto& pair : count) {
            freq[pair.second].push_back(pair.first);
        }
        
        // 3. Traverse buckets from highest frequency to lowest
        vector<int> result;
        for (int i = nums.size(); i > 0; i--) {
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
