class Solution {
public:
    int reverse(int x) {
        bool sign;
        long long num, ret;
        sign = (x>0)?true:false;
        num  =  sign?x:-x;
        ret  = 0;
        while (num > 0) {
            ret = 10*ret + (num%10);
            num = num / 10;
        }
        if (ret > INT_MAX) { // INT_MAX shound include <limits.h>
            return 0;
        } else {
            return (int) sign?ret:-ret;
        }
    }
};
