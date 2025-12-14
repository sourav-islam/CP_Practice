class Solution
{
public:
    int countElements(vector<int> &nums, int k)
    {
        // nums.erase(unique(nums.begin(), nums.end()),nums.end());
        sort(nums.begin(), nums.end());
        int cnt = 0;
        // unordered_map<int,int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int lg = nums.size() - (upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin());
            if (lg >= k)
                cnt++;
            // mp[nums[i]] = nums.size() - i - 1;
        }
        // for(auto [x,y] : mp)
        //     {

        //     }
        // for(int v : nums) cout << v << " ";
        // cout << "\n";
        return cnt;
    }
};