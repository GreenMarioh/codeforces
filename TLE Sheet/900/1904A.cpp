#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    int count = 0;

    set<pair<int, int>> knight1, knight2;
    vector<pair<int, int>> directions = {
        {a, b}, {a, -b}, {-a, -b}, {-a, b}, {b, a}, {b, -a}, {-b, -a}, {-b, a}};

    for (auto [dx, dy] : directions)
    {
        knight1.insert({xk + dx, yk + dy});
        knight2.insert({xq + dx, yq + dy});
    }

    for (auto pos : knight1)
    {
        if (knight2.count(pos))
        {
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}