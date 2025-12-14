class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int mx = 0, mn = 0;
        while (k >= 0 && i < k)
        {
            mn += nums[i];
            mx += nums[j];
            i++, j--;
        }
        return abs(mx - mn);
    }
};
