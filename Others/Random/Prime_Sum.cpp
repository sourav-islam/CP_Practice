#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

// bool isPrime(int x)
// {
//     for(int i = 2; i*i <= x; i++)
//     {
//         if(x % 2 == 0) return false;
//     }
//     return true;
// }
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
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        vector<int> a;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                a.push_back(v[i] + v[j]);
            }
        }

        int cnt = 0;
        for (int x : a)
        {
            // if(isPrime(x)) cnt++;
            cout << x;
        }
        // cout << cnt << "\n";
        cout << "\n";
    }
    return 0;
}