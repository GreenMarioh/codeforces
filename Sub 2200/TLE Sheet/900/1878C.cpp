#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k, x;
    cin >> k >> n >> x;

    ll lowest = n * (n + 1) / 2;
    ll highest = n * k - (n * (n - 1)) / 2;

    if (x >= lowest && x <= highest)
        cout << "YES\n";
    else
        cout << "NO\n";
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
}