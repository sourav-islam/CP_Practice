class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int minIdx = 205;
        for (auto s : strs)
        {
            minIdx = min(minIdx, int(s.size()));
        }
        string f = "";

        for (int i = 0; i < minIdx; i++)
        {
            char ch = strs[0][i];
            set<char> s;
            for (auto st : strs)
            {
                s.insert(st[i]);
            }
            if (s.size() == 1)
                f += ch;
            else
                return f;
        }
        return f;
    }
};