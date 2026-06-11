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
    int n, x, y, z;
    ci n >> x >> y >> z;

    // case 1 deciding to use AI
    int written = z*x;
    int left = -written + n;
    int totalTime1;
    if (left <= 0){
        totalTime1 = (n + x - 1) / x;
    } else {
        int speed =x+10*y;
        int extra = (left + speed - 1) / speed;
        totalTime1 = z + extra;
    }
    
    // case 2 not using AI; 
    int totalTime2 = (n + x + y - 1) / (x + y);

    co  min(totalTime1, totalTime2) ded
    
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