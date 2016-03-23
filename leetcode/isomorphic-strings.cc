class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) 
            return false;
            
        int i, j;
        char map1[128]={0}, map2[128]={0}, c1, c2;
        
        for (i = 0; i < s.length(); i++) {
            c1 = s[i];
            c2 = t[i];
            if (map1[c1] == 0 && map2[c2] == 0) {
                map1[c1] = c2;
                map2[c2] = c1;
            } else {
                if (c2 != map1[c1]) return false;
                if (c1 != map2[c2]) return false;
            }
        }
        
        return true;
    }
};
