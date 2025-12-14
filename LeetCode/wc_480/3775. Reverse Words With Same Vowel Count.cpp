class Solution
{
public:
    void reverse(int i, int j, string &s)
    {
        while (i < j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseWords(string s)
    {
        int n = s.size();
        int i = 0;

        int c = 0;
        while (i < n && s[i] != ' ')
        {
            if (isVowel(s[i]))
                c++;
            i++;
        }

        while (i < n)
        {
            if (s[i] == ' ')
            {
                i++;
                continue;
            }

            int st = i;
            int v = 0;

            while (i < n && s[i] != ' ')
            {
                if (isVowel(s[i]))
                    v++;
                i++;
            }

            if (v == c)
                reverse(st, i - 1, s);
        }

        return s;
    }
};