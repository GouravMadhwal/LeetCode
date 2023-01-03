class Solution
{
    public:
        int minDeletionSize(vector<string> &strs)
        {
            int count = 0;
            for (auto c = 0; c < strs[0].size(); ++c)
            {
                for (auto r = 1; r < strs.size(); ++r)
                {
                    if (strs[r - 1][c] > strs[r][c])
                    {
                        count++;
                        break;
                    }
                }
            }
            return count;
        }
};