#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> v;
    int ans = 0;
    int i = 0;
    while (num != 0)
    {
        int bit = num % 10;
        // v.push_back(bit);
        // cout << bit;
        if (bit == 1)
        {
            ans += pow(2, i);
        }
        num = num / 10;
        i++;
    }
    cout << "\n"
         << ans;
    // reverse(v.begin(), v.end());
    // for (int i : v)
    //     cout << i;
    // cout << s;
}
