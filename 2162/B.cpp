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
    string s;
    ci s;

    vi i0, i1;
    rep(i, 0, n)
    {
        if (s[i] == '0')
            i0.push_back(i + 1);
        else
            i1.push_back(i + 1);
    }

    if (!i0.empty())
    {
        co i0.size() << "\n";
        for (int i = 0; i < (int)i0.size(); ++i)
            co i0[i] << (i + 1 == (int)i0.size() ? '\n' : ' ');
    }
    else if (!i1.empty())
    {
        co i1.size() << "\n";
        for (int i = 0; i < (int)i1.size(); ++i)
            co i1[i] << (i + 1 == (int)i1.size() ? '\n' : ' ');
    }
    else
    {
        co - 1 << "\n";
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
