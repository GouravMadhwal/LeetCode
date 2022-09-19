class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int flag = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i] == nums[j] && (i*j)%k == 0 && i!=j){
                    flag++;
                }
            }
        }
        return flag/2;
    }
};