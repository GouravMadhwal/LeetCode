class Solution
{
    public:
        int smallestEvenMultiple(int n)
        {
            if (n % n == 0 && n % 2 == 0)
            {
                return n;
            }
            for (int i = n * 2;; i++)
            {
                if (i % n == 0 && i % 2 == 0)
                {
                    return i;
                }
            }
            return 0;
        }
};