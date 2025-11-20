#include <bits/stdc++.h>
// #define int long long
// typedef long long int ll;
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        sort(v.begin(), v.end());
        cout << v[n - 1] << "\n";

        // maximum average so max element is the highest average.
        // Adding small element with max element decrease the average
    }

    return 0;
}