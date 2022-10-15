class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 0, ans = 1, ans2 = 0;
        while(n>0){
            a = n%10;
            ans *= a;
            ans2 += a;
            n=n/10;
        }
        return ans - ans2;
    }
};