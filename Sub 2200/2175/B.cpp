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
    int n, l, r;
    ci n >> l >> r;          

    vector<int> arr(n);
    vector<int> pref(n + 1);

    pref[0] = 0;

    
    for (int i = 1; i <= n; i++)
        pref[i] = i;

    
    pref[r] = l - 1;

    
    for (int i = 1; i <= n; i++)
        arr[i - 1] = pref[i] ^ pref[i - 1];

    for (int i = 0; i < n; i++)
        co arr[i] << " ";
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