#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int search(ull arr[], ull n, ull K)
{
    ull start = 0;
    ull end = n - 1;
    while (start <= end)
    {
        ull mid = (start + end) / 2;
        if (K == arr[mid]) return mid;
        if (K > arr[mid]) start = mid + 1;
        else if (K < arr[mid]) end = mid - 1;
    }
    return end + 1;
}

int main()
{
    freopen("THAMQUAN.INP", "r", stdin);
    freopen("THAMQUAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ull n, m, B;
    cin >> n >> m;
    ull A[n + 1];
    A[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ull in;
        cin >> in;

        A[i] = A[i - 1] + in;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B;
        cout << max(search(A, n + 1, B) - 1, 0) << ' ';
    }
    return 0;
}
