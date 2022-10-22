class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        for(int i=0;i<word.size();++i){
            if(word[i] == ch){
                index = i;
                break;
            }
        }
        int start = 0;
        while(start<index){
            char temp = word[start];
            word[start] = word[index];
            word[index] = temp;
            start++;
            index--;
        }
        return word;
    }
};