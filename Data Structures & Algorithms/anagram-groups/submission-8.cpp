class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count;
        for (const auto & str : strs) {
            vector<int> char_counts(26,0);
            string key = "";
            for (char c : str) {
                char_counts[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
            key += "#" + to_string(char_counts[i]);
            }
            count[key].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair : count) {
            result.push_back(pair.second);
        }
        return result;

        
    }
};
