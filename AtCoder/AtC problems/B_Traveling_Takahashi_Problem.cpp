/* #include <bits/stdc++.h>
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
    vector<pair<int, int>> v;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    long double ans = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        auto p = v[i];
        ans += sqrt(((p.first - v[i + 1].first) * (p.first - v[i + 1].first) + (p.second - v[i + 1].second) * (p.second - v[i + 1].second)));
    }
    cout << setprecision(20) << ans << endl;
    return 0;
} */

#include <iostream>
#include <vector>
#include <cmath>   // for sqrt
#include <iomanip> // for setprecision

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v;

    // Reading the points
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    long double ans = 0;

    // Distance from the origin to the first point
    ans += sqrt(v[0].first * v[0].first + v[0].second * v[0].second);

    // Distance between successive points
    for (int i = 0; i < v.size() - 1; i++)
    {
        ans += sqrt((v[i].first - v[i + 1].first) * (v[i].first - v[i + 1].first) +
                    (v[i].second - v[i + 1].second) * (v[i].second - v[i + 1].second));
    }

    // Distance from the last point back to the origin
    ans += sqrt(v.back().first * v.back().first + v.back().second * v.back().second);

    // Output the result with 20 digits after the decimal
    cout << fixed << setprecision(20) << ans << endl;

    return 0;
}
