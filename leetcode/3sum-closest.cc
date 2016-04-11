class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        int ret=0;
        if (nums.size() < 3) return ret;
        
        sort(nums.begin(), nums.end());
        ret = nums[0]+nums[1]+nums[2];

        for (auto it = nums.begin(); it < nums.end()-2; ++it) {
            auto jt = it+1, kt = nums.end()-1;
            while (jt < kt) {
                int val = *it + *jt + *kt;
                if (val < target) {
                    ++jt;
                } else if (val > target) {
                    --kt;
                } else {
                    ret = target;
                    break;
                    ++jt; --kt;
                }
                if (abs(val-target) < abs(ret-target) )
                    ret = val;
            }
        }

        return ret;
    }
};

