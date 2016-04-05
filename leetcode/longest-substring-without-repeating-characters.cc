class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last;
        int ret=0, left=-1;

        for (int i = 0; i < s.length(); ++i) {
            if (last.find(s[i])!=last.end() && last[s[i]]>left) {
                left = last[s[i]];
            }
            ret = max(ret, i-left);
            last[s[i]] = i;
        }

        return ret;     
    }
};
