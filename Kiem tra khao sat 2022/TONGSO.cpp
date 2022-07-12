#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, k, accum = 0;

    freopen("TONGSO.INP", "r", stdin);
    freopen("TONGSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> k;

    for (long long i = a; i <= b; i++)
    {
        if (i % k == 0)
            accum += i;
    }

    cout << accum;
    return 0;
}