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
        if (n % 2)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << n / 4 + 1 << "\n";
    }
    return 0;
}