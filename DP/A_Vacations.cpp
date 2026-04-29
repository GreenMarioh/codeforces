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
    getv(a, n);
    vector<vector<ll>> dp(n+1, vector<ll>(3, 0));
    
    for(ll i  = 1; i <= n; i++){
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        if (a[i-1] == 1 || a[i-1] == 3){
            dp[i][1] = max(dp[i-1][0]+1, dp[i-1][2]+1);
        }
        if (a[i-1] == 2 || a[i-1] == 3){
            dp[i][2] = max(dp[i-1][0]+1, dp[i-1][1]+1);
        }
    }
    ll res = 0;
    for(ll i =0; i < 3; i++){
        res = max(res, dp[n][i]);
    }
    co n - res;    

}

int main()
{
    meow;
    int t =1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}