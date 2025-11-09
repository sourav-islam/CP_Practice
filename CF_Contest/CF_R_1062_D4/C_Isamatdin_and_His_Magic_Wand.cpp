#include <bits/stdc++.h>
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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        for (int &val : a)
        {
            cin >> val;
            if (val % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == n || odd == n)
        {
            for (int v : a)
                cout << v << " ";
        }
        else
        {
            sort(a.begin(), a.end());
            for (int v : a)
                cout << v << " ";
        }
        cout << "\n";
    }
    return 0;
}