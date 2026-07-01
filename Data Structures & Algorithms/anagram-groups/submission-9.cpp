class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> fairs;
        for (const auto& str : strs) {
            string key = "";
            vector<int> count(26,0);
            for (char c : str) {
                count[c-'a']++;
            }
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }
            fairs[key].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair: fairs) {
            result.push_back(pair.second);
        }
        return result;
        
    }
};
