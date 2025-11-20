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
        int r, x, d, n;
        cin >> r >> x >> d >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ans++;
                if (r - d < 0)
                    r = 0;
                else
                    r -= d;
            }
            else if (s[i] == '2' && r < x)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}