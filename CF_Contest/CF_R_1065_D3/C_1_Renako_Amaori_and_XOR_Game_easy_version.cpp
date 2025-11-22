#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    int even1 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (!(a[i] % 2))
            even1++;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        if (!(b[i] % 2))
            even1++;
    }
    if (!(even1 % 2))
    {
        cout << "Tie\n";
        return;
    }
    for (int i = n; i > 0; i--)
    {
        if (a[i] != b[i])
        {
            if (i % 2)
                cout << "Ajisai\n";
            else
                cout << "Mai\n";
            break;
        }
    }
    return;
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