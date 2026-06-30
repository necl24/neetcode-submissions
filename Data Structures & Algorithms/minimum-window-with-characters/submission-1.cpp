class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty()) return "";
        
        unordered_map<char, int> countT, window;
        for (char c : t) {
            countT[c]++;
        }
        
        int have = 0;
        int need = countT.size();
        pair<int, int> res = {-1, -1};
        int resLen = INT_MAX;
        int l = 0;
        
        for (int r = 0; r < s.length(); r++) {
            char c = s[r];
            window[c]++;
            
            if (countT.count(c) && window[c] == countT[c]) {
                have++;
            }
            
            // Shrink the window as long as it contains all required characters
            while (have == need) {
                // Update result if this window is smaller than previous best
                if ((r - l + 1) < resLen) {
                    resLen = r - l + 1;
                    res = {l, r};
                }
                
                // CRITICAL FIX: Decrement the left character's frequency
                window[s[l]]--;
                
                // If it falls below the required threshold, we lose a "matching" character
                if (countT.count(s[l]) && window[s[l]] < countT[s[l]]) {
                    have--;
                }
                l++;
            }
        }
        
        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};