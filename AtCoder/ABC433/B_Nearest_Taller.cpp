#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void figure_out()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    // cout << v.size();
    vector<int> a;
    for (int i = n; i > 1; i--)
    {
        int j;
        for (j = i - 1; j >= 1; j--)
        {
            if (v[j] > v[i])
            {
                a.push_back(j);
                break;
            }
        }
        if (j < 1)
            a.push_back(-1);
    }
    reverse(a.begin(), a.end());
    cout << -1 << "\n";
    for (int x : a)
        cout << x << "\n";
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