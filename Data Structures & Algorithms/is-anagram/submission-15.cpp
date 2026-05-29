class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (const auto& pair: count) {
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
        
    }
};
