// post contest
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
    vll a(n);
    rep(i, 0, n){
        ci a[i];
    }
    ll sum = 0;
    for(ll i:a){
        sum+=i;
    }
    vll suf(n, 0);
    suf[n-1] = a[n-1];
    sum-=suf[n-1];
    per(i,0, n-1){
        suf[i] = min(suf[i+1], a[i]);
        sum -=suf[i];
    }

    ll longest = 1, curr =1;
    rep(i, 1, n){
        if (suf[i] == suf[i-1]) curr++;
        else {
            longest = max(longest, curr);
            curr = 1;
        }
    }
    longest  = max(longest, curr);
    co sum+longest-1 ded
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