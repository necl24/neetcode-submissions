class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,int> count;
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (const auto &val : count) {
            if (val.second != 0) {
                return false;
            }
        }
        return true;
        
    }
};
