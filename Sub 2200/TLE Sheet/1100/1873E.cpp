#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll idx, vector<int> &a, int x)
{
    ll units = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] < idx)
        {
            units += (idx - a[i]);
        }
    }
    return units <= x;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll l = 1, r = 1e12;
    ll res = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, a, x))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << res << endl;
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