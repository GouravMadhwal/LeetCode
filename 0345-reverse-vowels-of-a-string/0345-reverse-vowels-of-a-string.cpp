class Solution
{
    private:
        bool isVowel(char ch)
        {
            return  ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U';
        }

    public:
        string reverseVowels(string s)
        {
            int itr1 = 0, itr2 = s.size() - 1;
            while (itr1 < itr2)
            {
                while (itr1 < itr2)
                {
                    if (!isVowel(s[itr1]))
                    {
                        itr1++;
                    }
                    else
                    {
                        break;
                    }
                }
                while (itr1 < itr2)
                {
                    if (!isVowel(s[itr2]))
                    {
                        itr2--;
                    }
                    else
                    {
                        break;
                    }
                }
                char temp = s[itr1];
                s[itr1] = s[itr2];
                s[itr2] = temp;
                itr1++;
                itr2--;
            }
            return s;
        }
};