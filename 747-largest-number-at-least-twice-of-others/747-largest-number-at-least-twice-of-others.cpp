class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN, max_index = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
                max_index = i;
            }
        }
        sort(nums.begin(), nums.end());
        if(nums[nums.size()-1]/2 >= nums[nums.size()-2])
            return max_index;
        return -1;
    }
};