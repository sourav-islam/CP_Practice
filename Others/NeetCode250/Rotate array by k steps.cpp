class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        k = k % nums.size();
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};