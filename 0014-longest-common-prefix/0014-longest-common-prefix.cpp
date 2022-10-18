class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {
            string a = strs[0];
            string b = strs[0];
            for (int i = 0; i < strs.size(); ++i)
            {
                if (strs[i] > a)
                {
                    a = strs[i];
                }
                if (strs[i] < b)
                {
                    b = strs[i];
                }
            }
            string ans = "";
            for (int i = 0; i < b.size(); ++i)
            {
                if (a[i] == b[i])
                {
                    ans = ans + b[i];
                }
                else
                {
                    break;
                }
            }
            return ans;
        }
};