class Solution {
public:
    string makeGood(string s) {
        if(s.size() < 2){
            return s;
        }
        vector<char>ans;
        for(int i=0;i<s.size();i++){
            if(!ans.empty() && abs(ans.back() - s[i]) == 32){
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }
        string answer(ans.begin(), ans.end());
        return answer;
    }
};