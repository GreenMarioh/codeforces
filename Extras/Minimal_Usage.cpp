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

    void solve()
    {
        ll n, k, s, m;
        ci n >> k >> s >> m;

        if (m == 1) {
            co max(0LL, 2 * k - s) ded
            return;
        }

        if (m == n) {
            co max(0LL, s - k * (n - 1)) ded
            return;
        }

        if (n == 3 && m == 2) {
            co ((s - k) & 1LL) ded
            return;
        }

        if (m == 2) {
            co (s == k + 1 ? 1 : 0) ded
            return;
        }

        if (m == n - 1) {
            co (s == k * n - 1 ? 1 : 0) ded
            return;
        }

        if (k == 1) {
            co (s == m ? 1 : 0) ded
            return;
        }

        co 0 ded
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