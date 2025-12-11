class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, int> mp;
        int i = -1;
        for (auto s : strs)
        {
            sort(s.begin(), s.end());
            if (!mp.count(s))
            {
                i++;
                mp.insert({s, i});
            }
        }
        vector<vector<string>> v(mp.size());
        for (string s : strs)
        {
            string tmp = s;
            sort(s.begin(), s.end());
            int idx = mp[s];
            v[idx].push_back(tmp);
        }
        return v;
    }
};
