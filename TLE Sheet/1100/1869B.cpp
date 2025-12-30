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

void solve()
{
    int n, k, a, b;
    ci n >> k >> a >> b;

    vector<int> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    ll ans = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);
    ll minS = LLONG_MAX / 2;
    ll minT = LLONG_MAX / 2;
    for (int i = 1; i <= k; i++)
    {
        minS = min(minS, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
        minT = min(minT, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
    }
    ans = min(ans, minS + minT);
    co ans << "\n";
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