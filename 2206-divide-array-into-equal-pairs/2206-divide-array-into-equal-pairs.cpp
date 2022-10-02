class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int pairs = nums.size()/2;
        int count = 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i=i+2){
            if(nums[i] == nums[i+1])
                count++;
        }
        if(count == pairs){
            return true;
        }
        return false;
    }
};