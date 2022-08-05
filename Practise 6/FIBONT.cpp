#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long number)
{
    for (int i = 2; i * i <= number; i++)
        if (number % i == 0) return false;
    return true;
}

int main()
{
    freopen("FIBONT.INP", "r", stdin);
    freopen("FIBONT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N, before = 1, current = 1, tempnum = 0;
    cin >> N;

    // vector<bool> prime(N, true);

    // prime[1] = false;
    // for (int p = 2; p * p <= N; p++)
    // {
    //     if (!prime[p]) continue;
    //     for (int i = p * 2; i <= N; i += p)
    //         prime[i] = false;
    // }

    while (current <= N)
    {
        tempnum = current + before;
        before = current;
        current = tempnum;
        if (isPrime(current))
            cout << current << "\n";
    }

    return 0;
}