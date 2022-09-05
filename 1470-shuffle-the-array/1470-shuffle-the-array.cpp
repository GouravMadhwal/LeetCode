class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums.size(),0);
        int k=0;
        for(int i=0;i<n;i++){
            result[k]=nums[i];
            k=k+2;
        }
        int m=1;
        for(int i=n;i<nums.size();i++){
            result[m]=nums[i];
            m=m+2;
        }
        return result;
    }
};