#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll extra = 0;
    for (auto v : arr)
    {
        extra += min(v, ll(a - 1));
    }
    cout << b + extra << "\n";
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