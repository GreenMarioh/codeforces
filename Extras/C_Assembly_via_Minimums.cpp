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
    ll m = (n*(n-1))/2;
    vector<int> a(m);
    for(int i = 0; i < m; i++){
       ci a[i];
    }
    sort(all(a));
    vector<int> res;
    int idx = 0;
    for(int i =n-1; i>= 1; i--){
        res.push_back(a[idx]);
        idx+=i;
    }

    res.push_back(1e9);

    for(int i:res){
        co i << " ";
    }
    co endl;


    
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