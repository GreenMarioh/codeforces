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
    rep(i, 0, n) ci arr[i];

    map<int, int> mpp;
    for (int i : arr)
    {
        mpp[i]++;
    }

    if (mpp.size() == 1)
    {
        co mpp.size() << endl;
        return;
    }
    if (mpp.size() == 2)
    {
        int res = INT_MAX;
        for (auto i : mpp)
        {
            if (res > i.second)
            {
                res = i.second;
            }
        }
        co res * 2 << endl;
        return;
    }

    else
    {
        int res = INT_MAX;
        int resMax = INT_MIN;
        for (auto i : mpp)
        {
            if (res < i.second)
            {
                res = i.second;
            }
            if (resMax > i.second)
            {
                res = resMax;
            }
        }
        co max(res * 3, resMax) << endl;
        return;
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