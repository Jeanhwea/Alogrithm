class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0) return 0;
        int i=0, res;
        bool sign = true;
        
        while(isspace(str[i])) i++;
        
        if (str[i]=='+' || str[i]=='-') {
            sign = (str[i++]=='+');
        }
        
        res = 0;
        while(isdigit(str[i])) {
            
            if ((res>INT_MAX/10) || (res==INT_MAX/10 && str[i]-'0'>INT_MAX%10)) {
                return sign ? INT_MAX: INT_MIN;
            }
            
            res = 10*res + str[i++]-'0';
        }
        
        return sign ? res : -res;
    }
};
