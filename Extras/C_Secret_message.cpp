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
    cin >> n >> k;
    string s;
    vector<ll> mask(n), div;
    rep(i, 0, k){
        cin >> s;
        rep(j, 0, n){
            mask[j] |= (1<<(s[j]-'a')); 
        }
    }
    for(int i = 1; i*i <=n; i++){
        if (!(n%i)){
            div.push_back(i);
            if (i * i != n) div.push_back(n / i);
        }
    }
    
    sort(all(div));
    for(int i:div){
        string res = "", res2;
        bool can = 1;
        rep(j, 0, i){
            ll x = (1<<26)-1;
            for(int c = j; c<n; c+=i){
                x&=mask[c];;
            }
            if (x==0){
                can = 0; break;       
            }
            for(int c = 0; c < 26; c++){
                if ((x>>c)&1){
                    res += ('a'+c);
                    break;
                }
            }
        }
        if (can){
            for(int j = 0; j<n/i; j++){
                res2+=res;
            }
            co res2 ded;
            return;
        }
        }
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