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

vi v, cnt, dp;
int k, m;

bool dfs(int i)
{
    if (dp[i] != -1)
        return dp[i];

    int r = upper_bound(v.begin(), v.end(), v[i] + k) - v.begin() - 1;

    for (int j = i + 1; j <= r; j++)
    {
        if (!dfs(j))
            return dp[i] = 1;
    }

    return dp[i] = !(cnt[i]&1);
}


void solve()
{
    int n;
    ci n >> k;

    getv(a, n);

    sort(all(a));

    v.clear();
    cnt.clear();

    for (int x : a)
    {
        if (v.empty() || v.back() != x)
        {
            v.push_back(x);
            cnt.push_back(1);
        }
        else
            cnt.back()++;
    }

    m = v.size();
    dp.assign(m, -1);


    for (int i = 0; i < m; i++)
        if (dfs(i)) {
            co "YES\n"; return;
        }

    co "NO\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    ci t;

    while (t--)
        solve();

    return 0;
}