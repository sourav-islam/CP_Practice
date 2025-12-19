class Solution
{
public:
    bool hasTripletSum(vector<int> &arr, int target)
    {
        // Code Here
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            int l = i + 1, r = arr.size() - 1;
            while (l < r)
            {
                int sum = arr[i] + arr[l] + arr[r];
                if (sum > target)
                    r--;
                else if (sum < target)
                    l++;
                else
                {
                    return true;
                }
            }
        }
        return false;
    }
};