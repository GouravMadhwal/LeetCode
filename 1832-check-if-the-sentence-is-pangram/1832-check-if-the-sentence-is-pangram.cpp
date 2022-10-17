class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            set<char> ans(sentence.begin(), sentence.end());
            if (ans.size() == 26)
            {
                return true;
            }
            return false;
        }
};