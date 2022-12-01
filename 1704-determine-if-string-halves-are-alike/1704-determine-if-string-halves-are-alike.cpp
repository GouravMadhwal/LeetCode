class Solution
{
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return true;
        }
        return false;
    }
    public:
        bool halvesAreAlike(string s)
        {

            string a = s.substr(0, s.size() / 2);
            string b = s.substr(s.size() / 2);
            int count1 = 0, count2 = 0;
            for (int i = 0; i < a.size(); i++)
            {
                if (isVowel(a[i]))
                {
                    count1++;
                }
            }
            for (int i = 0; i < b.size(); i++)
            {
                if (isVowel(b[i]))
                {
                    count2++;
                }
            }
            return (count1 == count2);
        }
};