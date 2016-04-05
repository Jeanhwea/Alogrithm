// 暴力搜索; 复杂度: O(n^2)
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length(), first=0, last=0;

        for (int i = 0; i < len; ++i) {
            int j;
            // abcba 形式
            for (j=0;i+j<len && i-j>=0 && s[i+j]==s[i-j]; j++) ;
            if (last-first+1<2*j-1) {
                first = i-j+1;
                last = i+j-1;
            }

            // abba 形式
            for (j=0; i+1+j<len && i-j>=0 && s[i+1+j]==s[i-j]; j++) ;
            if (last-first+1<2*j) {
                first = i-j+1;
                last = i+j;
            }
        }

        return s.substr(first, last-first+1);
    }
};