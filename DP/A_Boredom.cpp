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

void solve()
{
    int n; ci n;
    unordered_map<ll, ll> mpp;
    vll a(n);
    ll mx = 0;
    rep(i, 0, n){
        ci a[i];
        mpp[a[i]]++;
        mx = max(mx, a[i]);
    }
    vll dp(1e5+1, 0);
    dp[1] = mpp[1];
    for(ll i = 2; i <= mx; i++){
        dp[i] = max(dp[i-1], dp[i-2]+mpp[i]*i);
    }

    co dp[mx];


    
}

int main()
{
    meow;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}