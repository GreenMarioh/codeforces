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
    int n, k, q;
    ci n >> k >> q;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    ll total = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] > q)
        {
            i++;
            continue;
        }
        j = i;
        while (j < n && arr[j] <= q)
        {
            j++;
        }
        ll len = j - i;
        if (len >= k)
        {
            ll count = (ll)(len - k + 1) * (len - k + 2) / 2; // (n*(n-1)/2)
            total += count;
        }

        i = j;
    }
    co total << endl;
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