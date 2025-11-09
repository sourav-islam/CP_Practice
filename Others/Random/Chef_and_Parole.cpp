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

        int mx = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            int val = (n - 2 * i) / 2;
            if (val > 0)
            {
                mx = max(mx, (val * i));
            }
        }
        cout << mx << endl;
    }
    return 0;
}