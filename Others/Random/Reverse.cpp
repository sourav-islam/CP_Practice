#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = digit * (pow(10, i)) + ans; // same order
        // ans = ans * 10 + digit; // Reverse order
        n /= 10;
        i++;
    }
    cout << ans;
}
