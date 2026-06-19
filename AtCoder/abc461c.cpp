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

#define getv(a, n)              \
    vector<int> a(n);           \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

void solve()
{
    int N, K, M;
    cin >> N >> K >> M;

    vector<vector<ll>> t(N + 1);

    for (int i = 0; i < N; i++)
    {
        int C;
        ll V;
        cin >> C >> V;
        t[C].push_back(V);
    }

    vector<ll> top, tail;

    for (auto &r : t)
    {
        if (!r.empty())
        {
            sort(r.begin(), r.end(), greater<ll>());

            top.push_back(r[0]);

            for (int i = 1; i < (int)r.size(); i++)
                tail.push_back(r[i]);
        }
    }

    sort(top.begin(), top.end(), greater<ll>());

    for (int i = M; i < (int)top.size(); i++)
        tail.push_back(top[i]);

    sort(tail.begin(), tail.end(), greater<ll>());

    ll ans = 0;

    for (int i = 0; i < min(M, (int)top.size()); i++)
        ans += top[i];

    for (int i = 0; i < min(K - M, (int)tail.size()); i++)
        ans += tail[i];

    cout << ans << '\n';
}

int main()
{
    meow;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}