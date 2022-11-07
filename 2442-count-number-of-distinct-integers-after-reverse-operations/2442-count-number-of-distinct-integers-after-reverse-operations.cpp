class Solution
{
    private:
        int reverse(int num)
        {
            int ans = 0;
            while (num)
            {
                int rem = num % 10;
                num /= 10;
                ans *= 10;
                ans = ans + rem;
            }
            return ans;
        }
    public:
        int countDistinctIntegers(vector<int> &nums)
        {
            int len = nums.size();
            for (int i = 0; i < len; ++i)
            {
                int rev = reverse(nums[i]);
                nums.push_back(rev);
            }
            unordered_set<int>answer(nums.begin(), nums.end());
            return answer.size();
        }
};