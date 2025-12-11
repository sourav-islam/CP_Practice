#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    int y, r;
    cin >> y >> r;
    int ans = r;
    int rem = n - r;
    if (y / 2 <= rem)
        cout << ans + y / 2 << "\n";
    else
        cout << ans + rem << "\n";
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