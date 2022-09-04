class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp=0;
        vector<int>result;
        for(auto i=0;i<nums.size();i++){
            temp=temp+nums[i];
            result.push_back(temp);
        }
        return result;
    }
};