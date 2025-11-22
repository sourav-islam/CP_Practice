#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n - 1; i += 2)
    {
        if (v[i] != v[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        figure_out();
    }
    return 0;
}