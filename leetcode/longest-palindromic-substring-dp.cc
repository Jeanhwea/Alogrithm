// 动态规划解法; 时间复杂度: O(n^2)，空间复杂度: O(n^2)
# define N 1000
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 0 ) return s;
        int len = s.length(), first=0, mlen=1;
        bool f[N][N]={}; // f[i][j]表示区间[i,j]字串是回文串
        

        // 当j等于i时, f[i][j] = true
        // 当j等于i+1时, f[i][j] = true, 如果s[i]=s[j]
        //                       = false, 如果s[i]=s[j]
        for (int i=0; i<len; ++i) f[i][i] = true;
        for (int i=0; i<len-1; ++i) {
            if (s[i]==s[i+1]) {
                f[i][i+1] = true;
                first = i; mlen = 2;
            }
        }

        // 当j大于i时, f[i][j] = f[i+1][j-1], 如果s[i]=s[j]
        //                     = false, 如果s[i]!=s[j]
        for (int k=2; k<=len; ++k) {
            for (int i=0; i+k<len; ++i) {
                if (s[i]==s[i+k])
                    f[i][i+k] = f[i+1][i+k-1];
                else
                    f[i][i+k] = false;
                if (f[i][i+k] && (k+1>mlen)) {
                    first = i; mlen=k+1;
                }
            }
        }

        return s.substr(first, mlen);
    }
};
