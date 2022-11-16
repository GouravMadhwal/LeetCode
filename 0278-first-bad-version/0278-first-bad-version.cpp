// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
    public:
        int firstBadVersion(int n)
        {
            int start = 1, end = n;
            while (true)
            {
                int mid = start + (end - start) / 2;
                if (isBadVersion(mid))
                {
                    if (!isBadVersion(mid - 1))
                    {
                        return mid;
                    }
                    end = mid - 1;
                }
                else if (!isBadVersion(mid))
                {
                    start = mid + 1;
                }
            }
        }
};