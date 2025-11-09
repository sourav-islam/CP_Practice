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
    /*  while (t--)
     {
         string s;
         cin >> s;
         int n;
         cin >> n;
         for (int i = 0; i < n; i++)
         {
             int a;
             char b;
             cin >> a >> b;
             // char pre = s[a - 1];
             if (a >= 1 && a < s.size())
             {
                 s[a - 1] = b;
             }

             auto found = s.find("1100");
             if (found != string ::npos)
                 cout << "YES" << "\n";
             else
                 cout << "NO" << "\n";
         }
     }
     return 0; */

    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            char b;
            cin >> a >> b;
            // Update the character at position `a - 1` (1-based to 0-based index)
            if (a >= 1 && a <= s.size())
            {
                s[a - 1] = b;
            }
        }

        // Manually check for the substring "1100"
        bool found = false;
        for (size_t i = 0; i < s.size() - 3; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

/* #include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            char b;
            cin >> a >> b; // Ensure `b` is read as a character
            if (a < s.size())
                s[a - 1] = b; // Update the character at position `a-1`

            if (s.find("1100") != string::npos)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }

        // Check if the substring "1100" exists in `s`
    }
    return 0;
}
 */