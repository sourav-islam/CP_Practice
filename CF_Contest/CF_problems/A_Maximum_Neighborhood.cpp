#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int figure_out()
{
    int n;
    cin >> n;

    if (n == 1)
        return 1;
    else if (n == 2)
        return 9;
    else
    {
        return max((5 * (n * n - n - 1)), (4 * n * n - n - 4));
    }
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
        cout << figure_out() << "\n";
    }
    return 0;
}