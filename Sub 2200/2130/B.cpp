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
    int n, s;
    ci n >> s;
    vector<int> a(n);
    int sum = 0;
    int zeroes = 0, ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            zeroes++;
        else if (a[i] == 1)
            ones++;
        else if (a[i] == 2)
            twos++;
    }
    int Req = s - sum;
    if (Req < 0 || Req == 1) // can stop
    {
        bool first = true;
        for (int i = 0; i < zeroes; i++)
        {
            if (!first)
                co ' ';
            co 0;
            first = false;
        }
        for (int i = 0; i < twos; i++)
        {
            if (!first)
                co ' ';
            co 2;
            first = false;
        }
        for (int i = 0; i < ones; i++)
        {
            if (!first)
                co ' ';
            co 1;
            first = false;
        }
        co endl;
    }

    else
    {
        co - 1 << endl;
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