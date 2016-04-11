class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ret;
        if (nums.size() < 3) return ret;
        sort(nums.begin(), nums.end());

        for (auto it = nums.begin(); it < nums.end()-2; ++it) {
            auto jt = it+1, kt = nums.end()-1;
            if (it > nums.begin() && *it==*(it-1)) continue;
            while (jt < kt) {
                if (*it + *jt + *kt < 0) {
                    ++jt;
                    while ((jt<kt) && (*jt==*(jt-1))) ++jt;
                } else if (*it + *jt + *kt > 0) {
                    --kt;
                    while ((kt>jt) && (*kt==*(kt+1))) --kt;
                } else {
                    ret.push_back({*it, *jt, *kt});
                    ++jt;
                    while ((jt<kt) && (*jt==*(jt-1))) ++jt;
                    --kt;
                    while ((kt>jt) && (*kt==*(kt+1))) --kt;
                }
            }
        }

        return ret;
    }
};

