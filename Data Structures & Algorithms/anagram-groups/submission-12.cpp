class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<int> count(26,0);
        unordered_map<string,vector<string>> result;
        for (const auto& str : strs) {
            vector<int> count(26,0);
            string key = "";
            for (char c : str) {
                count[c-'a']++;
            }
            for (int i = 0; i < 26; i++) {
            key+="#" + to_string(count[i]);
            }
          result[key].push_back(str);
        }
        vector<vector<string>> res;
        for (const auto& pair: result) {
            res.push_back(pair.second);
        }
        return res;
        
    }
};
