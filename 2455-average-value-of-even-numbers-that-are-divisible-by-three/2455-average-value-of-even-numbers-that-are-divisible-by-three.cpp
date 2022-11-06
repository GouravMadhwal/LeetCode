class Solution
{
    public:
        int averageValue(vector<int> &nums)
        {
            int count = 0, chk = 0;
            for (int i = 0; i < nums.size(); ++i)
            {
                if (nums[i] % 6 == 0)
                {
                    count += nums[i];
                    chk++;
                }
            }
            if(chk == 0){
                return 0;
            }
            return count/chk;
        }
};