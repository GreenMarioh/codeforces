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

bool is_good(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i <= n - 3; ++i)
    {
        vector<int> sub = {a[i], a[i + 1], a[i + 2]};
        set<int> present(sub.begin(), sub.end());
        int mex = 0;
        while (present.count(mex))
            ++mex;
        int maxx = *max_element(sub.begin(), sub.end());
        int minn = *min_element(sub.begin(), sub.end());
        if (mex != (maxx - minn))
            return false;
    }
    return true;
}

void solve()
{
    int n;
    ci n;
    vector<int> a(n);
    rep(i, 0, n) ci a[i];

    // BruteMaxxing ;-;
    for (int x = 0; x <= 100; ++x)
    {
        vector<int> temp = a;
        rep(i, 0, n)
        {
            if (temp[i] == -1)
                temp[i] = x;
        }
        if (is_good(temp))
        {
            co "YES\n";
            return;
        }
    }

    co "NO\n";
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