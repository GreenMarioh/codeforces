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
    vi a(n+1);
    rep(i, 1, n+1) ci a[i];
    
    vll pref(n+1, 0);
    rep(i, 1, n+1){
        pref[i] = pref[i-1] + a[i];
    }

    map<ll, vector<pair<int, int>>> mpp;
    for(int l = 1; l <= n; l++){
        for(int r = l; r<= n; r++){
            ll sum = pref[r] - pref[l-1];
            mpp[sum].push_back({r, l});
        }
    }
    vector<pii>  best;
    for (auto&[sum, v]:mpp){
        sort(all(v));
        vector<pii> curr;
        int lastEnd = 0;
        for(auto&[r, l]:v){
            if (l >lastEnd){
                curr.push_back({l, r});
                lastEnd = r;
            }
        }
        if (curr.size() > best.size()) best = curr;
    }
    co best.size() ded
    for (auto &[l, r]:best){
        co l << " " << r ded
    }

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