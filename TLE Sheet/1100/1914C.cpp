#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int res = 0;
    int max2nd = b[0];
    int ans = 0;

    for (int i = 0; i < min(n, k); i++)
    {
        res += a[i];
        max2nd = max(b[i], max2nd);
        ans = max(ans, res + max2nd * (k - i - 1));
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}