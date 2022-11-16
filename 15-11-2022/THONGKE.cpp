#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("THONGKE.INP", "r", stdin);
    freopen("THONGKE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, hcases = 0;
    string S;
    cin >> N;
    cin.ignore(32000, '\n');
    for (int i = 0; i < N; i++)
    {
        getline(cin, S);
        stringstream SS(S);

        string cases;
        int total = 0;
        while(getline(SS, cases, '-'))
        {
            cases.erase(cases.size() - 2, 2);
            int num = stoi(cases);
            total += num;
        }

        if (hcases > total) total = hcases;
        cout << total << '\n';
    }

    return 0;
}
