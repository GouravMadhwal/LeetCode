class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>());
        for(vector<int>::iterator itr = nums.begin();itr != nums.end();itr++){
            return *(itr + k- 1);
        }
        return 0;
    }
};