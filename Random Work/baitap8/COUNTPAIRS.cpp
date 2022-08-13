#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, cnt = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int day[N], count = 1;
        day[0] = 0;
        cnt = 0;

        for (int j = 1; j < N; j++)
        {
            day[j] = day[j - 1] + count;
            count++;
        }

        for (int j = 2; j < N; j++)
        {
            if (day[j] - day[j - 2] <= N) cnt++;
        }

        cout << cnt * 2 << "\n";
    }

    return 0;
}