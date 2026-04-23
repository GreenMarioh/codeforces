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
    string s1, s2;
    ci s1 >> s2;
    int res = 0;
    rep(i, 0, n){
        if (i == n-1){
            res += (s1[i] != s2[i]); continue;
        }
        if (s1[i] == s2[i]) continue;
        if (s1[i] == s1[i+1]){
            if (s2[i] != s2[i+1]) res++;
            i++;
        } else if (s2[i] == s2[i+1]){
            if (s1[i] != s1[i+1]) res++;
            i++;
        } else res += (s1[i] != s2[i]);
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