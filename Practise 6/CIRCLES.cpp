#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CIRCLES.INP", "r", stdin);
    freopen("CIRCLES.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if (r1 + r2 >= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) cout << "YES";
    else cout << "NO";

    return 0;
}