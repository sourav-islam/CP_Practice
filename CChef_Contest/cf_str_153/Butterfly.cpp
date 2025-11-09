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
        int r, g, b;
        cin >> r >> g >> b;
        if (r <= (g + b) && g <= (r + b) && b <= (r + g))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}