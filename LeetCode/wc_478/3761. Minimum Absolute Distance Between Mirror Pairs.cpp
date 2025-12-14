class Solution
{
public:
    int reverse(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            int digit = n % 10;
            ans = ans * 10 + digit;
            n /= 10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        int mn = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int rv = reverse(nums[i]);
            if (mp.count(rv) && i < mp[rv])
            {
                mn = min(mn, abs(i - mp[rv]));
            }
        }
        if (mn < INT_MAX)
            return mn;
        else
            return -1;
    }
};