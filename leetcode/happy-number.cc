class Solution {
public:
    bool isHappy(int n) {
        int res, digit;
        set<int> dupset;
    
        for (;;) {
            dupset.insert(n);
            for (res = 0; n != 0; n = n/10) {
                digit = n % 10;
                res += digit * digit;
            }
            if (res == 1)
                return true;
            else if (dupset.find(res) != dupset.end()) {
                return false;
            }
            n = res;
        }
    }
};
