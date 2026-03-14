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
    int n, k, p, m;
    ci n >> k >> p >> m;

    vector<int> a(n);
    rep(i, 0, n) ci a[i];

    int reqVal = a[p-1], reqIdx = p-1;
    multiset<pair<int, int>> topK;
    deque<pair<ll,int>> rest;

    rep(i, 0, n){
        if (i < k){
            topK.insert({a[i],i});
        } else rest.push_back({a[i], i});
    }

    int res = 0;
    bool isInK = (p <= k);
    while(1){
        if (isInK){
            if (m < reqVal) break;
            m -= reqVal;
            res++;
            topK.erase(topK.find({reqVal, reqIdx}));
            rest.push_back({reqVal, reqIdx});
            isInK = false;
        } else {
            pair<int, int> select = *topK.begin();
            if (m < select.first) break;
            m -= select.first;
            topK.erase(topK.begin());
            rest.push_back(select);
        }
        
            pair<int, int> next = rest.front();
            rest.pop_front();
            topK.insert(next);
            if (next.second == reqIdx) isInK = true;
        
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