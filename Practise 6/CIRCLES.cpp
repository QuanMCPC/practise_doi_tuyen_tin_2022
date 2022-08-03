#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CIRCLES.INP", "r", stdin);
    freopen("CIRCLES.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double two_radius = r1 + r2;
    if (two_radius >= distance and max(r1, r2) - min(r1, r2) < distance) cout << "YES";
    else cout << "NO";

    return 0;
}