#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

#define ded << "\n";

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

#define getv(a,n) \
    vector<int> a(n); \
    for(int i=0;i<n;i++) cin >> a[i];



int main()
{
    meow;
    int t, k;
    cin >> t >> k;
    int n = 1e5 + 7;
    vll dp(n+1, 0);
    rep(i, 1, k) dp[i] = 1;
    dp[k] = 2;
    rep(i, k+1, n+1) dp[i] = (dp[i-1] + dp[i-k])%MOD;
    rep(i, 1, n+1) dp[i] = (dp[i] + dp[i-1])%MOD;

    while (t--)
    {
        ll a, b;
        ci a >> b;
        ll res = (dp[b] - dp[a-1] + MOD) % MOD;
        co res ded

    }
    return 0;
}