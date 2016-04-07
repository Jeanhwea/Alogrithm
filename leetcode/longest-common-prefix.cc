class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        if (strs.size()<=0) return ret;
        ret = strs[0];
        
        for (int i=1; i<strs.size(); ++i) {
            string astr = strs[i];
            int j;
            for (j=0; j<ret.length()&&j<astr.length(); ++j) {
                if (ret[j]!=astr[j])
                    break;
            }
            ret = ret.substr(0,j);
        }
        
        return ret;
    }
};
