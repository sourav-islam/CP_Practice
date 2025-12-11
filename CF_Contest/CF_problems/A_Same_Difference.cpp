#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char fxd = s[n - 1];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] != fxd)
            ans++;
    }
    cout << ans << "\n";
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        figure_out();
    }
    return 0;
}