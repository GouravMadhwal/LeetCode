class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int len = nums1.size();
        if(len%2==0){
            double ans1=nums1[nums1.size()/2];
            double ans2=nums1[(nums1.size()-1)/2];
            double ans = (ans1+ans2)/2;
            return ans;
        }
        return nums1[nums1.size()/2];
    }
};