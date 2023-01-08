class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        vector<int>ans;
        int copy = x;
        int check = x;
        while(copy)
        {
            ans.push_back(copy%10);
            copy /= 10;
        }
        long reverse = 0;
        while(!ans.empty())
        {
            int size = ans.size();
            reverse = reverse + ((x % 10) * pow(10, size-1));
            x /= 10;
            ans.pop_back();
        }
        cout<<reverse<<" "<<check;
        return reverse == check;
    }
};