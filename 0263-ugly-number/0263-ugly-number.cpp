class Solution {
public:
    bool isUgly(int n) {
        vector<int>prime = {2,3,5};
        if(n <= 0){
            return false;
        }
        for(auto p : prime){
            while(n % p == 0){
                n /= p;
            }
        }
        return n == 1;
    }
};