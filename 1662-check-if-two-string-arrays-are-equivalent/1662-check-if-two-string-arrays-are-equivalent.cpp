class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string chk1="";
        string chk2="";
        for(int i=0;i<word1.size();++i){
            chk1 = chk1+word1[i];
        }
        for(int i=0;i<word2.size();++i){
            chk2 = chk2+word2[i];
        }
        if(chk1 == chk2){
            return true;
        }
        return false;
    }
};