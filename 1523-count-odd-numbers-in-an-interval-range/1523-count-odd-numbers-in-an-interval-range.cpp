class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        if(low%2 != 0){
            while(low<=high){
                low=low+2;
                count++;
            }
        }
        else{
            low += 1;
            while(low<=high){
                low += 2;
                count++;
            }
        }
        return count;
    }
};