class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        for(auto itr : nums)
            if(itr == target)
                return true;
        return false;
    }
};