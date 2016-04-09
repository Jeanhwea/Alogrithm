class Solution {
public:
    string countAndSay(int n) {
        string ret("1"), next;
        for (int i=1; i<n; ++i) {
            int ch, count = 1;
            ch = ret[0];
            for (int j=0; j<ret.length(); ++j) {
                if (j+1<ret.length() && ret[j+1]==ch) {
                    ++count;
                } else {
                    next += (char)count+'0';
                    next += ch;
                    if (j+1<ret.length()) {
                        ch=ret[j+1];
                        count=1;
                    }
                }
            }
            ret = next;
            next.clear();
        }
        return ret;
    }
};
