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
    for (int &x : v)
        cin >> x;

    if (v[0] == -1 && v[n - 1] != -1)
        v[0] = v[n - 1];
    else if (v[0] != -1 && v[n - 1] == -1)
        v[n - 1] = v[0];
    else if (v[0] == -1 && v[n - 1] == -1)
        v[0] = v[n - 1] = 0;

    cout << abs(v[n - 1] - v[0]) << "\n";
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
            cout << 0 << " ";
        else
            cout << v[i] << " \n"[i == n - 1];
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
        figure_out();
    }
    return 0;
}