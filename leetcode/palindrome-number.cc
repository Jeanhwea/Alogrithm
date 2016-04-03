class Solution {
public:
    bool isPalindrome(int x) {
        int hi;
        if (x < 0) return false;
        hi = 1;
        while (x/hi>9) hi = 10*hi;
        while (x > 0) {
            if (x/hi != x%10) return false;
            x = (x%hi)/10;
            hi /= 100;
        }
        return true;
    }
};
