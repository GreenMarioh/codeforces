//submitted after contest 

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

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
    int n;
    ci n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) ci arr[i];
    sort(all(arr));
    auto it = unique(all(arr));
    arr.erase(it, arr.end());
    int m = arr.size();
    
    vector<int> res(n + 1, INF);
    vector<int> vals;
    for (int x : arr) {
        if (x <= n) res[x] = 1;
        if (x > 1) vals.push_back(x);
    }

    for (int i = 2; i <= n; i++) {
        if (res[i] == INF) continue;
        for (int v : vals) {
            if (1LL * i * v > n) break;
            if (res[i * v] > res[i] + 1) {
                res[i * v] = res[i] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        co (res[i] == INF ? -1 : res[i]) << " ";
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