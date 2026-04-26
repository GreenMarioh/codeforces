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
    const int N = 100+10;
    int n, k, d;
    ci n >> k >> d;
    vector<ll> dp1(N), dp2(N), ps1(N), ps2(N);
    dp1[0] = 1; 
    for(int i = 1; i <= n; i++){
        ps1[i] = (ps1[i-1] + dp1[i-1]+MOD)%MOD;

        int l = max(0, i-k), r = i;
        dp1[i] = (ps1[r] - ps1[l] + MOD)%MOD;
    }

    dp2[0] = 1; 
    for(int i = 1; i <= n; i++){
        ps2[i] = (ps2[i-1] + dp2[i-1]+MOD)%MOD;

        int l = max(0, i-(d-1)), r = i;
        dp2[i] = (ps2[r] - ps2[l] + MOD)%MOD;
    }

    co (dp1[n]-dp2[n] + MOD)%MOD;

    
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