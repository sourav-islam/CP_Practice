#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if((y-x) == (z-y)) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
    return 0;
}