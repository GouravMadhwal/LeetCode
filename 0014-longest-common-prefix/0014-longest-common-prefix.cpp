class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {
            sort(strs.begin(), strs.end());
            string ans = "";
            for (int i = 0; i < 1; ++i)
            {
                for (int j = 0; j < strs[i].size(); j++)
                {
                    if (strs[0][j] != strs[strs.size() - 1][j])
                    {
                        break;
                    }
                    else {
                        ans = ans + strs[0][j];
                    }
                }
            }
            return ans;
        }
};