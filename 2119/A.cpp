#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (b < a - 1 || (b < a && a % 2 == 0))
    {
        cout << "-1\n";
        return;
    }
    if (b == a - 1)
    {
        cout << y << "\n";
        return;
    }
    int ans = 0;
    while (a != b)
    {
        if (a % 2 == 0)
            ans += min(x, y);
        else
            ans += x;
        a++;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}