class Solution
{
    public:
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {
            int a = INT_MIN;
            for (int i = 0; i < candies.size(); i++)
            {
                if (candies[i] > a)
                {
                    a = candies[i];
                }
            }
            vector<bool> ans;
            for (int i = 0; i < candies.size(); i++)
            {
                if ((candies[i] + extraCandies) >= a)
                {
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            return ans;
        }
};