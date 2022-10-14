class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char>ans(jewels.size(), 0);
        for(int i=0;i<jewels.size();i++){
            ans[i] = jewels[i];
        }
        int count = 0;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<stones.size();j++){
                if(ans[i] == stones[j])
                    count++;
            }
        }
        return count;
    }
};