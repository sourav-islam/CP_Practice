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
    cin >> s >> t;
    if ((s.size() == t.size()) && s == t)
        cout << 0;
    else
    {
        int min_size = min(s.size(), t.size());
        int idx;
        bool ok = true;
        for (int i = 0; i < min_size; i++)
        {
            if (s[i] != t[i])
            {
                idx = i + 1;
                ok = false;
                break;
            }
        }
        ok ? (cout << min_size + 1) : (cout << idx);
    }
    return 0;
}