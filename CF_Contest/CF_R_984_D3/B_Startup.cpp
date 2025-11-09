#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;

        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            mp[a] += b;
        }
        vector<int> v;
        for (auto [x, y] : mp)
        {
            v.push_back(y);
        }
        sort(v.rbegin(), v.rend());
        int si = v.size();
        int sum = 0;
        for (int i = 0; i < min(n, si); i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}