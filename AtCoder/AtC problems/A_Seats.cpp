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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < t - 2; i++)
    {
        if (s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#')
        {
            ans++;
            i++;
        }
    }
    cout << ans;
    return 0;
}