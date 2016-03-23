class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a, b, i, j;
        
        i = j = 0;
        while (i<version1.length() || j<version2.length()) {
            a = b = 0;
            while(i<version1.length() && version1[i] != '.')
                a = 10*a + version1[i++]-'0';
            if (version1[i] == '.')
                i++;
            while(j<version2.length() && version2[j] != '.')
                b = 10*b + version2[j++]-'0';
            if (version2[j] == '.')
                j++;
            if (a > b) return 1;
            if (a < b) return -1;
        }
        
        return 0;
    }
};
