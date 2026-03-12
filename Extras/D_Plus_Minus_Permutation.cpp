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

void solve()
{
    ll n,x,y;
    ci n >> x >> y;

    //vector<ll> arr(n+1,0);

    ll a = n/x;
    ll b = n/y;
    ll c = n/(lcm(x, y));
    a -= c;
    b -= c;
    ll sumx = b*(b+1)/2;
    ll d = n - a;
    ll sumy = n*(n+1)/2 - d*(d+1)/2;
    co sumy - sumx ded

    // ll cur = n;
    // ll sumx = 0, sumy = 0;

    // for(ll i = x; i <= n; i += x){
    //     arr[i] = cur;
    //     sumx += cur;
    //     cur--;
    // }

    // cur = 1;
    // for(ll i = y; i <= n; i += y){
    //     if(arr[i] == 0){
    //         arr[i] = cur;
    //         cur++;
    //     } 
    // }

    // for(int i = 1; i <= n; i++)
    //     sumy += arr[i];

    // co sumx - sumy << "\n";
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