class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1;
        for(;i<nums.size() && j < nums.size();){
            if(nums[j] != nums[i]){
                i = j;
                j++;
            }
            else if(nums[j] == nums[i]){
                nums[j] = INT_MAX;
                j++;
            }
        }
        sort(nums.begin(), nums.end());
        auto itr = lower_bound(nums.begin(), nums.end(), INT_MAX) - nums.begin();
        return itr;
    }
};