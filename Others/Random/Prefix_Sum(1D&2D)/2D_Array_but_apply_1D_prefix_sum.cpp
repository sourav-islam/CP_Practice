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

    vector<vector<int>> A(n + 1, vector<int>(m + 1, 0)), pref;
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
            A[i][j] = A[i][j - 1] + A[i][j];
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int row1, col1, row2, col2;
        cin >> row1 >> col1 >> row2 >> col2;
        int sum = 0;
        for (int i = row1; i <= row2; i++)
        {
            sum += (A[i][col2] - A[i][col1 - 1]);
        }
        cout << sum << endl;
    }
    return 0;
}

// input
// N M
// 2D array
// Queries: Q
// row1,col1, row2,col2

// 3 5
// 1 2 1 3 4
// 2 1 2 3 0
// 2 3 0 1 2
// 2
// 2 2 3 4
// 1 2 2 3

// Output : prefix sum array of each row and ans
// 1 3 4 7 11
// 2 3 5 8 8
// 2 5 5 6 8
// 10
// 6