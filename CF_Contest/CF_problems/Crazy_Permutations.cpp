#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        for (int i = 0; i < N; ++i)
            cin >> B[i];

        bool ok = true;
        for (int i = 0; i + 1 < N; ++i)
        {
            long long da = A[i] - A[i + 1];
            long long db = B[i] - B[i + 1];
            if ((da < 0 && db >= 0) || (da > 0 && db <= 0))
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}
