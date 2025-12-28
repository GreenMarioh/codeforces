#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

#define vi vector<int>
#define vll vector<long long>

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = b - 1; i >= a; --i)
#define all(x) x.begin(), x.end()
//not solved or incorrect
void solve()
{
    int n;
    ci n;
    vector<ll> a(n);
    rep(i, 0, n) ci a[i];

    if (n == 2)
    {
        co max(a[0], -a[1]) << '\n';
        return;
    }

    vector<ll> dp(n, -LINF);
    dp[0] = 0;
    dp[1] = max(a[0], -a[1]);

    for (int i = 2; i < n; i++)
        dp[i] = max(dp[i - 1] + a[i - 1],
                    dp[i - 2] + a[i - 2] - a[i]);

    co *max_element(all(dp)) << '\n';
}



int main()
{
    meow;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}