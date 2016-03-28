class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        vector<int> ret;

        for (int i = 0; i < nums.size(); ++i)
            indices[nums[i]] = i;

        for (int i = 0; i < nums.size(); ++i) {
            int delta = target - nums[i];
            if (indices.find(delta) != indices.end() && indices[delta]>i) {
                ret.push_back(i);
                ret.push_back(indices[delta]);
                break;
            }
        }

        return ret;   
    }
};
