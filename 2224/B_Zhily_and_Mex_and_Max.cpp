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

    vector<int> a(n);
    map<int,int> freq;

    for (int &x : a) {
        cin >> x;
        freq[x]++;
    }

    int mx = *max_element(a.begin(), a.end());

    vector<int> b;

    b.push_back(mx);
    freq[mx]--;
    int cur = 0;

    while (freq[cur] > 0) {
        b.push_back(cur);
        freq[cur]--;
        cur++;
    }

    for (auto &[x,c] : freq) {
        while (c--) b.push_back(x);
    }

    ll res = 0;

    set<int> s;
    int prefMax = 0;
    int mex = 0;

    for (int x : b) {
        s.insert(x);
        prefMax = max(prefMax, x);

        while (s.count(mex))
            mex++;

        res += mex + prefMax;
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