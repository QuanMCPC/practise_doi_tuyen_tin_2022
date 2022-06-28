#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    freopen("HOMEWORK.INP", "r", stdin);
    freopen("HOMEWORK.OUT", "w", stdout);
    cin >> A >> B >> C >> D;
    if (B > C)
    {
        cout << B - C;
    }
    else
    {
        cout << 0;
    }
    return 0;
}