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
    ll n;
    cin >> n;
    ll divisor = 11;
    int power = 2;
    vector<ll> res;
    while (divisor < n)
    {
        if (n % divisor == 0)
        {
            res.push_back(n / divisor);
        }
        divisor = pow(10, power) + 1;
        power++;
    }
    if (res.size() == 0)
    {
        co 0 << endl;
    }
    else
    {
        co res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            co res[i] << " ";
        }
        co endl;
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