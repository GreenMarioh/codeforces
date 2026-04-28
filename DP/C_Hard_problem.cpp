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
    vector<string> s(n), rev(n);
    for(int i = 0; i < n; i++){
        ci s[i];
        rev[i] = s[i];
        reverse(all(rev[i]));
    }
    vector<vector<ll>> dp(n, vector<ll>(2, 1e18));
    dp[0][0] = 0;
    dp[0][1] = a[0]; // first string cost koi restriction nahi

    rep(i, 1, n){
        if (s[i] >= s[i-1]){
            dp[i][0] = min(dp[i][0], dp[i-1][0]);
        }

        if (s[i] >= rev[i-1]){
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        }

        if (rev[i] >= s[i-1]){
            dp[i][1] = min(dp[i][1], dp[i-1][0] + a[i]);
        }
        if (rev[i] >= rev[i-1]){
            dp[i][1] = min(dp[i][1], dp[i-1][1] + a[i]);
        }
    }

    ll res = min(dp[n-1][0], dp[n-1][1]);
    if (res >= 1e18) {
        co "-1\n"; return;
    } else co res ded

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