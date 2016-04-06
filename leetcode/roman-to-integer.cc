class Solution {
public:
    int romanToInt(string s) {
        map<char, int> ro2int;
        ro2int['I'] = 1;
        ro2int['V'] = 5;
        ro2int['X'] = 10;
        ro2int['L'] = 50;
        ro2int['C'] = 100;
        ro2int['D'] = 500;
        ro2int['M'] = 1000;
        int ret = ro2int[s[s.length()-1]];
        for (int i = s.length()-2; i>=0; --i) {
            if (ro2int[s[i+1]]<=ro2int[s[i]])
                ret += ro2int[s[i]];
            else
                ret -= ro2int[s[i]];
        }
        
        return ret;
    }
};
