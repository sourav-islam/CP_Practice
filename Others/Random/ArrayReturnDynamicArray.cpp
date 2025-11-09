#include <bits/stdc++.h>
using namespace std;

/* int *fun()
{
    int *ar = new int[5]{2, 4, 8, 6, 9};

    return ar;
}

int main()
{
    int *p = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    // delete[] p;
    free(p);
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
} */

int main()
{
    int *a = new int[5];
    int *b = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[7];
    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[5] = 39;
    a[6] = 40;
    for (int i = 0; i < 7; i++)
    {
        cout << a[i];
    }
    delete[] a;

    cout << "\n";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i];
    }
}