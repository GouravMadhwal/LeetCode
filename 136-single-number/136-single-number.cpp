class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 1){
            return nums[0];
        }
        else {
        for(int i=0;i<nums.size();i=i+2){
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        }
        return 0;
    }
};