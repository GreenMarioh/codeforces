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
    ci n >> k;
    string s;
    cin >> s;
    string res(n + 1, '?');
    

    int c0 = 0;
    int c1 = 0;
    for (char ch : s)
    {
        if (ch == '0')
        {
            c0++;
        }
        else if (ch == '1')
        {
            c1++;
        }
    }
    int c2 = k - c0 - c1;
    for (int i = 1; i <= c0; i++)
    {
        res[i] = '-';
    }
    for (int i = n; i > n - c1; i--)
    {
        res[i] = '-';
    }
    for (int i = c0 + c2 + 1; i <= n - c1 - c2; i++)
    {
        res[i] = '+';
    }
    for (int i = 1; i <= n; i++)
    {
        co res[i];
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