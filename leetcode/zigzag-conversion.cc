class Solution {
public:
    string convert(string s, int numRows) {
        string ret;
        int maxlen = s.length();
        if (numRows <= 1) return s;
        for (int i = 1; i <= numRows; i++) {
            for (int j = 1; j <= maxlen; j++) {
                int idx = idxconvert(i, j, numRows);
                if (idx>0 && idx <= s.length())
                    ret.push_back(s[idx-1]);
            }
        }
        return ret;
    }

    static int idxconvert(int i, int j, int n) {
        int q, r, ret;
        q = (j-1)/(n-1), r = (j-1)%(n-1);
        if (r == 0) {
            ret = 2*(j-1)+i;
        } else if (r==n-i){
            ret = 2*q*(n-1)+n+n-i;
        } else {
            ret = 0;
        }
        return ret;
    }
};
