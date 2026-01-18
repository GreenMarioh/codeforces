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
    int n, m, h;
    ci n >> m >> h;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    // vector<int> b(m), c(m);

    vector<int> add(n, 0), changedIdx;
    vector<bool> changed(n, 0);
    for (int i = 0; i < m; i++)
    {
        int b, c;
        ci b >> c;
        int idx = b - 1;
        if (!changed[idx])
        {
            changed[idx] = 1;
            changedIdx.push_back(idx);
        }
        add[idx] += c;
        if (arr[idx] + add[idx] > h)
        {
            for (auto ch : changedIdx)
            {
                add[ch] = 0;
                changed[ch] = 0;
            }
            changedIdx.clear();
        }
    }

    rep(i, 0, n)
    {
        co arr[i] + add[i] << " ";
    }
    co endl;
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