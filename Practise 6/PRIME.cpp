#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll L, R, count = 0;
    cin >> L >> R;

    vector<bool> prime(R, true);

    prime[1] = false;
    for (ll p = 2; p * p <= R; p++)
    {
        if (!prime[p]) continue;
        for (ll i = p * 2; i <= R; i += p)
            prime[i] = false;
    }

    for (ll i = L; i <= R; i++)
        if (prime[i]) count++;

    cout << count;
    return 0;
}