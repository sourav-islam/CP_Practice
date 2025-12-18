class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str;
        for (char ch : s)
        {
            if (ch >= 'A' && ch <= 'Z')
                str.push_back(ch + 32);
            if (ch >= 'a' && ch <= 'z')
                str.push_back(ch);
            if (ch >= '0' && ch <= '9')
                str.push_back(ch);
        }

        int i = 0, j = str.size() - 1;
        while (i < j)
        {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
