// references:
// https://youtu.be/v8G2gjQ_gp8?si=E_l-m9Ujy-3FLo1l
// https://www.youtube.com/watch?v=1h_AhfOBhDE
// Used the concept of O(1) Spatial Hashing and the 4-step Prefix XOR repeating pattern.

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

const int MOD = 998244353;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = b - 1; i >= a; --i)
#define all(x) x.begin(), x.end()

#define getv(a,n) \
    vector<int> a(n); \
    for(int i=0;i<n;i++) cin >> a[i];

ll check(ll x, ll rem){
    if (x < 0) return 0;
    return (x>>2) + ((x&3) >= rem); // x/4 + x % 4;
    
}

void solve()
{
    ll n, x;
    ci n >> x;

    ll L0 = check(x-1, 3) + 1;
    ll R0 = check(n, 3) - check(x-1, 3);

    ll L1 = check(x-1, 1);
    ll R1 = check(n, 1) - check(x-1, 1);

    ll res = (((L0%MOD) * (R0%MOD))%MOD + ((L1%MOD)*(R1%MOD))%MOD)%MOD;
    co res ded

    
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