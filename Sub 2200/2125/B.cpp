#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll a, ll b, ll c)
{
    ll n = __gcd(a, b);
    ll dx = a / n;
    ll dy = b / n;

    if (dx <= c && dy <= c)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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
        ll a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
}