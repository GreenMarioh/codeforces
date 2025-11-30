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

string encode(ll x)
{
    string s;
    rep(i, 0, 7)
    {
        s += char('a' + (x % 26));
        x /= 26;
    }
    reverse(all(s));
    return s;
}

ll decode(const string &chunk)
{
    ll val = 0;
    for (char c : chunk)
        val = val * 26 + (c - 'a');
    return val;
}

void solve()
{
    string run;
    ci run;

    if (run == "first")
    {
        ll n;
        ci n;
        vll a(n);
        rep(i, 0, n) ci a[i];

        string res;
        rep(i, 0, n) res += encode(a[i]);
        co res << "\n";
    }
    else
    {
        string s;
        ci s;
        ll n = s.size() / 7;
        co n << "\n";
        rep(i, 0, n)
        {
            string chunk = s.substr(i * 7, 7);
            co decode(chunk);
            if (i + 1 < n)
                co " ";
        }
        co "\n";
    }
}

int main()
{
    meow;
    solve();
    return 0;
}
