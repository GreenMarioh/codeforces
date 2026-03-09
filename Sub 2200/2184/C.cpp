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
    ll n, k;
    ci n >> k;
    if (n == k)
    {
        co "0\n";
        return;
    }
    set<ll> curr;
    curr.insert(n);
    int res = 0;
    while (!curr.empty())
    {
        res++;
        set<ll> next;
        bool f = 0;
        for (ll x : curr)
        {
            if (x <= 1)
                continue;
            ll p1 = x / 2, p2 = (x + 1) / 2;
            if (p1 == k || p2 == k)
            {
                f = 1;
                break;
            }
            if (p1 > 0)
                next.insert(p1);
            if (p2 > 0)
                next.insert(p2);
        }
        if (f)
        {
            co res << "\n";
            return;
        }
        if (next.empty())
            break;
        curr = next;
    }
    co "-1\n";
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