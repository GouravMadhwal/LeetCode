class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;
        int digit = 0;
        for(int i = 1; i <= 4 ;i++){
            digit = num % 10;
            num = num / 10;
            ans.push_back(digit);
        }
        sort(ans.begin(), ans.end());
        int digits1 = 0;
        digits1 = ans[0]*10 + ans[2];
        digit = ans[1]*10 + ans[3];
        return digit + digits1;
    }
};