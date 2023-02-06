class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n, 0);
        int g=0, s=n;
        for(int i=0;i<ans.size();i+=2){
            ans[i] = nums[g];
            g++;
        }
        for(int i=1;i<ans.size();i+=2){
            ans[i] = nums[s];
            s++;
        }
        return ans;
    }
};