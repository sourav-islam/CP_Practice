#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        int ans = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            ans = max(ans, abs(a[i + 1] - a[i]));
        }
        cout << ans << "\n";
    }
}
