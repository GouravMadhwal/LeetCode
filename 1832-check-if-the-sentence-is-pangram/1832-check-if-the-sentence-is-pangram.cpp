class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            set<char> ans;
            for (int i = 0; i < sentence.size(); i++)
            {
                ans.emplace(sentence[i]);
            }
            if (ans.size() == 26)
            {
                return true;
            }
            return false;
        }
};