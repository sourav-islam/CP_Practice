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
        ;
        int x = 0, i = 1;
        while (x > (-n) && x < n)
        {
            if (i % 2 == 0)
                x += (2 * i - 1);
            else
                x -= (2 * i - 1);
            i++;
        }
        if ((i) % 2 != 0)
            cout << "Sakurako" << "\n";
        else
            cout << "Kosuke" << "\n";
    }
    return 0;
}