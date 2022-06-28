#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, lan_ran;
    freopen("DANEM.INP", "r", stdin);
    freopen("DANEM.OUT", "w", stdout);

    cin >> N;
    lan_ran = N / 9;
    if (N % 9 != 0) lan_ran += 1;
    cout << lan_ran;
    return 0;
}