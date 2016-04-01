class Solution {
public:
    string convert(string s, int numRows) {
        string ret;
        int strlen = s.length();
        if (numRows <= 1) return s;
        for (int i = 1; i <= numRows; i++) {
            for (int j = 1; j <= strlen; j++) {
                int r = (j-1)%(numRows-1);
                if (0!=r&&numRows-i!=r) continue; // 跳过空白

                int idx = 0;
                if (0==r) {
                    // 计算主线上的元素
                    idx = 2*(j-1)+i;
                } else {
                    // 计算对角线上的元素
                    idx = 2*((j-r)-1)+numRows+r;
                }
                if (idx>0 && idx <= strlen)
                    ret.push_back(s[idx-1]);
            }
        }
        return ret;
    }
};
