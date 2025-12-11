#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

string divide_exact(long long numi, long long denomi, int precision)
{
    string result = to_string(numi / denomi);
    result += ".";

    long long rem = numi % denomi;

    for (int i = 0; i < precision; i++)
    {
        rem *= 10;
        result += char('0' + (rem / denomi));
        rem %= denomi;
    }
    return result;
}
void figure_out()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    for (int i = 1; i <= m; i++)
    {
        long long sum = 0;
        for (int v : mp[i])
        {
            sum += v;
        }
        long long sz = mp[i].size();
        cout << divide_exact(sum, sz, 20) << "\n";
    }
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