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
    ll sum = 0;
    for(int i:a){
        sum+=i;
    }
    if (sum%3 != 0){
        co "0\n"; return;
    }
    ll target = sum/3;
    ll countFirst = 0;
    vector<ll> pre(n+1, 0);
    for(int i = 0; i <= n-1; i++){
        pre[i+1] = a[i] + pre[i];
    }
    ll res = 0;
    rep(i, 1, n){
        if (pre[i] == 2*target) res+=countFirst;
        if (pre[i] == target) countFirst++;
    }
    co res ded
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