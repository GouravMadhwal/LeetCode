class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto itr : grid){
            for(auto itr2 : itr){
                if(itr2 < 0)
                    count++;
            }
        }
        return count;
    }
};