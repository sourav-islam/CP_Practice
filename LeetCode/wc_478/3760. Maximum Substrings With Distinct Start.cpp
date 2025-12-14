class Solution
{
public:
    int maxDistinct(string s)
    {
        // s.erase(unique(s.begin(),s.end()),s.end());
        unordered_map<char, int> v;
        for (char a : s)
        {
            if (!v.count(a))
                v[a]++;
        }
        // cout << s;
        return v.size();
    }
};