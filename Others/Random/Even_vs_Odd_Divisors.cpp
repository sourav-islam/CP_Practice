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
        int ev = 0, od = 0;
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {

                if (i % 2 == 0)
                    ev++;
                else
                    od++;

                if (i != n / i)
                {
                    if ((n / i) % 2 == 0)
                        ev++;
                    else
                        od++;
                }
            }
        }

        if (ev > od)
        {
            cout << 1 << endl;
        }
        else if (ev == od)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}