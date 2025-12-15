#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1), pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }
        cout << pref[r] - pref[l - 1] << "\n";
    }
    return 0;
}

// input
// 6 3
// 2 1 4 3 6 5
// 2 4
// 1 3
// 1 5

// output
//  8
//  7
//  16