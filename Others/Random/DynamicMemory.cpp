#include <bits/stdc++.h>
using namespace std;

int **fun()
{
    int *a = new int;
    cout << "Address of a : " << a << "\n";
    cout << "*a er Address : " << &a << "\n";
    return &a;
}
int main()
{
    /*   int *p = new int;
      // p = 203994; // can't do this cause p holding address
      *p = 10220;
      cout << p << "\n";
      cout << *p << "\n"; */

    int **p = fun();
    cout << "Address of p: " << p << "\n"; // p return 0, because new int is dynamic but *a is local(static). Return korar sathe delete hoye jabe.
}