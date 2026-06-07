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

vector<int> vals(int n){
    vector<int> res;

    while(n>2){
        res.push_back(n);
        if (n&1) n++;
        else n/=2;
    }
    if (n == 2){
        res.push_back(2);
        res.push_back(1);
    } else {
        res.push_back(1);
        res.push_back(2);
    }
    return res;
    
}

void solve()
{
    int n; ci n;
    getv(a, n);
    
    vector<int> possible = vals(a[0]);
    int c = possible.size();

    vector<ll> total(c, 0);
    vector<bool> valid(c, 1);

    rep(i, 0, n){
        vector<int> path = vals(a[i]);

        unordered_map<int, int> pos;
        
        for(int  k =0; k  < path.size(); k++){
            pos[path[k]] = k;
        }

        rep(j, 0, c){
            if (!valid[j]) continue;
            if (!pos.count(possible[j])) valid[j] = false;
            else total[j] += pos[possible[j]];
        }
    }

    ll res = 1e18;

    rep(j, 0, c){
        if (valid[j]) res = min(res, total[j]);
    }

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