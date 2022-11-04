class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>ans(nums.begin(), nums.end());
        return ans.size() != nums.size();
    }
};