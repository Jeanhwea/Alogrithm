class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j;
        if (nums.size() <= 0) return 0;
        
        for(i=j=0; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[++i]=nums[j];
            }   
        }
        return i+1;
    }
};
