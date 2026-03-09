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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int c0 = 0, c2 = 0;
    for (char ch : s)
    {
        if (ch == '0')
            c0++;
        else if (ch == '2')
            c2++;
    }

    string res = "";
    int x = n - k;
    for (int i = 1; i <= n; i++)
    {
        int l = i - x, r = i - 1;
        if (l > r)
        {
            res += '-';
            continue;
        }
        int minL = c0;
        int maxL = c0 + c2;
        if (maxL < l || minL > r)
            res += '-';
        else if (minL >= l && maxL <= r)
            res += '+';
        else
            res += '?';
    }

    co res << "\n";
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