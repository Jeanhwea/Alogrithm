class Solution {
public:
    bool isValid(string s) {
        stack<char> pare;
        for (string::iterator it = s.begin(); it != s.end(); ++it) {
            switch (*it) {
                case '{': case '[': case '(': {
                    pare.push(*it);
                    break;
                }
                case '}': {
                    if (pare.empty() || pare.top() != '{') return false;
                    pare.pop();
                    break;
                }
                case ']': {
                    if (pare.empty() || pare.top() != '[') return false;
                    pare.pop();
                    break;
                }
                case ')': {
                    if (pare.empty() || pare.top() != '(') return false;
                    pare.pop();
                    break;
                }
                default:
                    break;
            }
        }
        return pare.empty();
    }
};
