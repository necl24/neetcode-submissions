class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int n : nums) {
            freq[n]++;
        }
        vector<vector<int>> final(nums.size() + 1); 
        for (const auto& pair: freq) {
            final[pair.second].push_back(pair.first);
        }
        vector<int> res;
        for (int i = final.size() - 1; i >= 0; i--) {
            for (int n : final[i]) {
                res.push_back(n);
                if (res.size() ==k) {
                return res;
                }
            }
        }
          return res;
    }
};
