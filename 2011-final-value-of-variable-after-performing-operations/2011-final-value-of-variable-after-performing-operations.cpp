class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations, int X=0) {
        for(auto itr : operations){
            if(itr=="++X" || itr== "X++"){
                X++;
            }
            else {
                X--;
            }
        }
        return X;
    }
};