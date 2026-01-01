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
    ll c;
    ci n >> c;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];

    ll sqSum = 0, sum = 0;
    for (int i : arr)
    {
        ll tmp = (ll)i;
        sum += tmp;
        sqSum += tmp * tmp;
    }
    ll l = 1, r = 1e9;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        __int128 val = 4 * (__int128)mid * sum + 4 * (__int128)n * mid * mid;
        __int128 target = c - sqSum;
        if (val == target)
        {
            co mid << "\n";
            return;
        }
        else if (val < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return;
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