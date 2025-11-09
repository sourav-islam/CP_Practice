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
        int bit = num & 1;
        // v.push_back(bit);
        cout << bit;
        ans = bit * (pow(10, i)) + ans;
        // ans = ans * (pow(10, i)) + bit;
        num = num >> 1;
        i++;
    }
    cout << "\n"
         << ans;
    // reverse(v.begin(), v.end());
    // for (int i : v)
    //     cout << i;
    // cout << s;
}
