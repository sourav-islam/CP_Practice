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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        int mx = 0;
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != i + 1)
            {
                ok = false;
                mx = max(mx, a[i]);
            }
                }

        (ok) ? (cout << 0 << "\n") : (cout << mx + 1 << "\n");
    }
    return 0;
}