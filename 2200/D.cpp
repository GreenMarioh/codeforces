// half solved :(

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
    int n, x, y;
    ci n >> x >> y;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    int mn = *min_element(arr.begin() + x, arr.begin() + y - 1);
    string s = "";
    for (int i = x; i < y; i++)
    {
        s += to_string(arr[i]);
    }
    s += s;
    int smallidx = 0;
    for (int i = 0; i < y - x; i++)
    {
        if (s[i] - '0' == mn)
            smallidx = i;
    }
    for (int i = 0; i <= x; i++)
    {
        co arr[i] << " ";
    }
    for (int i = smallidx; i < y - x; i++)
    {
        co s[i] << " ";
    }
    for (int i = y; i < n; i++)
    {
        co arr[i] << " ";
    }
    cout ded
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