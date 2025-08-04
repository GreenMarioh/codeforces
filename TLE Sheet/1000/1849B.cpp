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

bool customComp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }
    return a.first > b.first;
}

void solve()
{
    int n, k;
    ci n >> k;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    vector<pii> arr2(n);
    rep(i, 0, n)
    {
        int x = arr[i] % k;
        if (x == 0)
            x = k;
        arr2[i] = {x, i + 1};
    }
    sort(all(arr2), customComp);
    for (auto it : arr2)
    {
        co it.second << " ";
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