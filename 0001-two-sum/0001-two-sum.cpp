class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ret (2);
        vector <int> cnums;
        cnums = nums;
        sort(cnums.begin(), cnums.end());
        int i = 0;
        while (cnums[i] < ceil((float)target/2) && i < cnums.size()-1) i++; 
        int j = 0;
        if (i < cnums.size() - 1 && cnums[i] == cnums[i + 1]){
            j = i;
            i++;
        } else{
            i > 0 ? j = i - 1 : i++;
        }

        while (1){
            if (cnums[i] + cnums[j] < target && i < cnums.size() - 1){
                i++;
            } else if(cnums[i] + cnums[j] > target && j > 0){
                j--;
            } else {
                break;
            }
        }
        std::cout << j << i;

        int f = 0;
        int l = 0;
        while (nums[f] != cnums[j]) f++;
        while (nums[l] != cnums[i]) l++;
        if (f==l){
            l++;
            while (nums[l] != cnums[i]) l++;
        }
        ret[0] = f;
        ret[1] = l;
        return ret;
        
        return nums;
    }
};