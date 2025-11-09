#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s;
    t = s.substr(s.size() - 3);
    // cout << t << endl;
    if (t == "san")
        cout << "Yes";
    else
        cout << "No";
    return 0;
}