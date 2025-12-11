#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int x, y, z;
    cin >> x >> y >> z;

    // while (x <= 100 && y <= 100)
    // {
    //     if (x == (y * z))
    //     {
    //         cout << "Yes";
    //         return;
    //     }
    //     x++;
    //     y++;
    // }
    // cout << "No";
    int lf = x - z * y;
    int d = z - 1;

    if (lf >= 0 && lf % d == 0)
        cout << "Yes";
    else
        cout << "No";
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