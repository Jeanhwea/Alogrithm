class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() <= 0) return 0;
        string::reverse_iterator last, last2;
        for (last = s.rbegin(); last != s.rend(); ++last) {
            if (' ' != *last) break;
        }
        for (last2 = last; last2 != s.rend(); ++last2) {
            if (' ' == *last2) break;
        }

        return last2-last;
    }
};
