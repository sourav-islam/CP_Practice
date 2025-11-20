#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    /* int mx = max({a, b, c});
    int mn = min({a, b, c});
    if (mx - mn >= 10)
        cout << "check again";
    else
    {
        if ((mx == a && mn == b) || (mx == b && mn == a))
            cout << "final " << c;
        else if ((mx == b && mn == c) || (mx == c && mn == b))
            cout << "final " << a;
        else
            cout << "final " << b;
    } */

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.rbegin(), v.rend());
    if (v[0] - v[2] >= 10)
        cout << "check again";
    else
        cout << "final " << v[1];
    return 0;
}