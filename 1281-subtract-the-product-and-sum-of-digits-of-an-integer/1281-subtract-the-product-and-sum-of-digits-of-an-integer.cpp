class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 0, ans = 1, copy = n;
        while(copy>0){
            a = copy%10;
            copy = copy/10;
            ans = ans * a;
        }
        int b = 0, ans2 = 0;
        while(n>0){
            b = n%10;
            n = n/10;
            ans2 = ans2 + b;
        }
        return ans - ans2;
    }
};