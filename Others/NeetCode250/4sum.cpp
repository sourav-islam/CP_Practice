class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        if (nums.size() < 4)
            return v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0 && target < 0)
                return v;
            else if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int l = j + 1, r = nums.size() - 1;
                while (l < r)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum > target)
                        r--;
                    else if (sum < target)
                        l++;
                    else if (sum == target)
                    {

                        v.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++, r--;
                        while (l < r && nums[l] == nums[l - 1])
                            l++;
                        while (l < r && nums[r] == nums[r + 1])
                            r--;
                    }
                }
            }
        }
        // for(auto ve: v){
        //     sort(ve.begin(), ve.end());
        // }

        // v.erase(unique(v.begin(), v.end()), v.end());

        return v;
    }
};