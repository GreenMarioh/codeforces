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

pair<int, bool> divideSteps(int a, int b, int x, int steps, bool isEqal){
    while((a > b) || (abs(a-b) != 1)){
        a = a/x;
        steps++;
        if (a < b) (b, a, x, steps, 0);
    }
    if (a !=b) return {steps, 0};
    else return {steps, 1};

}

//int divsteps() {}

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    vector<pair<ll, ll>> A, B;

    ll cur = a, cost = 0;
    while (1) {
        A.push_back({cur, cost});
        if (cur == 0) break;
        cur /= x; 
        cost++;
    }

    cur = b;
    cost = 0;
    while(1) {
        B.push_back({cur, cost});
        if (cur == 0) break; cur /= x; 
        cost++;
    }

    ll res = abs(a - b);
    for (auto &[va, ca] : A) {
        for (auto &[vb, cb] : B) {
            res = min(res, ca + cb + abs(va - vb));
        }
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