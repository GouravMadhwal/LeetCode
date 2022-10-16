class Solution
{
    public:
        int numberOfMatches(int n)
        {
            int matches = 0;
            while (n != 1)
            {
                if (n % 2 == 0)
                {
                    n = n / 2;
                    matches = matches + n;
                }
                else if (n % 2 != 0)
                {
                    n = (n / 2) + 1;
                    matches = matches + (n - 1);
                }
            }
            return matches; //or just simply return n-1 instead of all this
        }
};