#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(), v.end());
    int ans = 0;
    if (v[0] == v[1])
        ans++;
    if (v[2] == v[3])
        ans++;

    if (ans)
        cout << ans;
    else if (ans == 0 && v[1] == v[2])
        cout << 1;
    else
        cout << 0;

    return 0;
}
