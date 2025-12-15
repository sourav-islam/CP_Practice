#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> A, pref;
    A.resize(n + 1, vector<int>(m + 1, 0));
    pref.resize(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            pref[i][j] = (pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1] + A[i][j]);
            cout << pref[i][j] << " ";
        }
        cout << "\n";
    }
    int q;
    cin >> q;
    while (q--)
    {
        int row1, col1, row2, col2;
        cin >> row1 >> col1 >> row2 >> col2;
        int sum = pref[row2][col2] - pref[row2][col1 - 1] - pref[row1 - 1][col2] + pref[row1 - 1][col1 - 1];
        cout << sum << "\n";
    }
    return 0;
}

// input
// 3 5
// 1 2 1 3 4
// 2 1 2 3 0
// 2 3 0 1 2
// 2
// 2 2 3 4
// 1 2 2 3

// Output:
// 1 3 4 7 11
// 3 6 9 15 19
// 5 11 14 21 27
// 10
// 6