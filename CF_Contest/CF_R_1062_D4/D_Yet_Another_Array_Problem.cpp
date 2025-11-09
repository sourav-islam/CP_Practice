#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

bool isPrime(int num)
{

    if (num <= 1)
    {
        return false;
    }

    if (num == 2 || num == 3)
    {
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= num; i = i + 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}
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
        if (n == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        vector<int> v(n);
        int max_val = 0;
        for (int &val : v)
        {
            cin >> val;
            max_val = max(max_val, val);
        }
        bool flag = false;
        int ans;
        for (int val : v)
        {
            for (int i = 2; i < max_val; i++)
            {
                if (isPrime(i) && __gcd(i, val) == 1 && max(i, val) % min(i, val) != 0)
                {
                    ans = i;
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }

        if (flag)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
}