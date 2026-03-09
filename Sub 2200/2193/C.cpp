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
    int n, q;
    ci n >> q;
    vector<int> a(n), b(n);
    rep(i, 0, n) ci a[i];
    rep(i, 0, n) ci b[i];

    vector<int> best(n);
    best[n - 1] = max(a[n - 1], b[n - 1]);
    per(i, 0, n - 1) {
        best[i] = max({a[i], b[i], best[i + 1]});
    }

    vector<long long> pref(n + 1, 0);
    rep(i, 0, n) {
        pref[i + 1] = pref[i] + best[i];
    }

    rep(i, 0, q) {
        int l, r;
        ci l >> r;
        co pref[r] - pref[l - 1] <<  " ";
    }
    co "\n";
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