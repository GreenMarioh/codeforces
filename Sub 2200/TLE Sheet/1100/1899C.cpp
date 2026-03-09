#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long cur = a[0];
    long long ans = a[0];

    for (int i = 1; i < n; i++)
    {
        if ((abs(a[i]) & 1) != (abs(a[i - 1]) & 1))
        {
            cur = max(a[i], cur + a[i]);
        }
        else
        {
            cur = a[i];
        }
        ans = max(ans, cur);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
