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
    int n;
    ci n;
    vector<ll> a(n);
    rep(i, 0, n) ci a[i];

    vector<ll> prefixSum(n + 1), suffixSum(n);
    rep(i, 1, n)
    {
        prefixSum[i + 1] = abs(a[i]) + prefixSum[i];
    }
    for (int i = n - 1; i >= 1; i--)
    {
        suffixSum[i - 1] = suffixSum[i] - a[i];
    }

    ll res = suffixSum[0];
    for (int i = 1; i < n; i++)
        res = max(res, a[0] + prefixSum[i] + suffixSum[i]);

    co res << endl;
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