#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SCHEDULE.INP", "r", stdin);
    freopen("SCHEDULE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, X;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> X;
        cout << (10 - X) * (N - 1) << "\n";
    }

    return 0;
}