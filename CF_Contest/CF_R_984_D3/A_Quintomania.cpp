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
        for (int &i : a)
            cin >> i;
        bool is_perfect = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) != 7 && abs(a[i] - a[i + 1]) != 5)
            {
                is_perfect = false;
                break;
            }
        }
        if (is_perfect)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}