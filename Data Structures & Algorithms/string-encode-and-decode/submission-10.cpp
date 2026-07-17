class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (const auto& str : strs) {
            res += to_string(str.length()) + '#' + str;
        }
        return res;

    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> newres;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
                int length = stoi(s.substr(i,j-i));
                i = j + 1;
                j = i + length;
                newres.push_back(s.substr(i,length));
                i = j;
        }
      return newres;


    }
};
