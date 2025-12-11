#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    int ar[n];
    int cnt[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        cnt[ar[i]]++;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] != 0 && cnt[i] > i)
            ans += (cnt[i] - i);
        else if (cnt[i] != 0 && cnt[i] < i)
            ans += cnt[i];
        // cout << i << "->" << cnt[i] << endl;
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