#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("FIBONT.INP", "r", stdin);
    freopen("FIBONT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, before = 0, current = 1, tempnum = 0;
    cin >> N;

    vector<bool> prime(N, true);

    prime[1] = false;
    for (int p = 2; p * p <= N; p++)
    {
        if (!prime[p]) continue;
        for (int i = p * 2; i <= N; i += p)
            prime[i] = false;
    }

    while (current <= N)
    {
        tempnum = current + before;
        before = current;
        current = tempnum;
        if (prime[current])
            cout << current << "\n";
    }

    return 0;
}