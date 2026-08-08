class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res; 
        
        for (const auto& str : strs) {
         vector<int> count(26,0);
         string key = "";
            for (char c : str) {
                count[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
             key += '#' + to_string(count[i]);
            }
            res[key].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
        
    }
};
