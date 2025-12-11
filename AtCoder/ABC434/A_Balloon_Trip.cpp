#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int w, b;
    cin >> w >> b;
    int n = (w * 1000) / b;
    cout << n + 1;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        figure_out();
    }
    return 0;
}