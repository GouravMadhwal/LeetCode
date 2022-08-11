class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid = 0, ans = 0;

    while(start <= end)
    {
        mid = (start+end)/2;
        
        if(nums[mid] == target)
        {
            ans = mid;
            break;
        }
        else if(target > nums[mid])
        {
            start = mid+1;
        }
        else if(target < nums[mid])
        {
            end = mid-1;
        }
    }
    
    if(start > end)
    {
        return -1;
    }
    return ans;
}
};