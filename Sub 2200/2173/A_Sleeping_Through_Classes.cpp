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
    int n, k;
    ci n >> k;
    string s;
    ci s;
    int i = 0;
    while(i < n){
        if (s[i] == '1'){
            int tmp = k;
            i++;
            while(i < n && tmp--){
                if (s[i] == '1') tmp = k;
                else s[i] = '1';
                i++;
            }
        }
        else i++;
    }

    int res = 0;
    for(char c:s){
        if (c=='0') res++;
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