class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();
        int mx = 1, cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }

        return mx;
    }
};
