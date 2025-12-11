#include <algorithm>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int t = target - x;

            auto it = find(nums.begin() + i + 1, nums.end(), t);
            if (it != nums.end())
            {
                v.push_back(i);
                v.push_back(it - nums.begin());
                return v;
            }
        }

        return v;
    }
};
