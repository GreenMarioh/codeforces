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

void solve() {
    int n;
    cin >> n;

    vector<int> ans;

    if ((n&1)) {
        // 1 1 2 1 2 3 1 3 2 2 3 3
        ans = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};

        for (int i = 4; i <= n; i += 2) {
            ans.push_back(i);
            ans.push_back(i + 1);
            ans.push_back(i);
            ans.push_back(i);
            ans.push_back(i + 1);
            ans.push_back(i + 1);
            ans.push_back(i);
            ans.push_back(i + 1);
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            ans.push_back(i);
            ans.push_back(i + 1);
            ans.push_back(i);
            ans.push_back(i);
            ans.push_back(i + 1);
            ans.push_back(i + 1);
            ans.push_back(i);
            ans.push_back(i + 1);
        }
    }

    for (int x : ans)
        cout << x << ' ';
    cout << '\n';
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