class Solution {
public:
    bool isMatch(string s, string p) {
        if (0==p.length()) return (0==s.length());

        // 如果接下来的字符是"*", 匹配 ".*", "a*" 模式
        if (p.length()>1 && '*'==p[1]) {
            while ( (s.length()>0 && '.'==p[0]) || (s[0]==p[0]) ) {
                if (isMatch(s,p.substr(2))) return true;
                s = s.substr(1);
            }
            return isMatch(s, p.substr(2));
        } else { // 如果接下来的字符不是"*"
            return ( (s.length()>0 && '.'==p[0]) || (s[0]==p[0]) )? isMatch(s.substr(1), p.substr(1)) : false;
        }
    }
};
