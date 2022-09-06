class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char>st1;
        st1.insert(s.begin(), s.end());
        multiset<char>st2;
        st2.insert(t.begin(),t.end());
        if(st1 == st2){
            return true;
        }
        return false;
    }
};