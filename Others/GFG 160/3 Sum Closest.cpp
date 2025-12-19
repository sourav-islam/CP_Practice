class Solution
{
public:
    int closest3Sum(vector<int> &arr, int target)
    {
        // code here

        sort(arr.begin(), arr.end());
        int diff_mx = INT_MAX;
        int res;
        for (int i = 0; i < arr.size() - 2; i++)
        {
            int l = i + 1, r = arr.size() - 1;
            while (l < r)
            {
                int sum = arr[i] + arr[l] + arr[r];
                if (abs(sum - target) < diff_mx)
                {
                    res = sum;
                    diff_mx = abs(sum - target);
                }
                else if (abs(sum - target) == diff_mx)
                {
                    res = max(res, sum);
                }

                if (sum < target)
                    l++;
                else if (sum > target)
                    r--;
                else
                {
                    l++;
                    r--;
                }
            }
        }

        return res;
    }
};