//unsolved

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

    vector<vector<int>> bucket(n + 1);
    bucket[0].push_back(0);

    for (int i = 1; i <= n; i++)
    {
        vector<int> v;
        v.reserve(1 << i);

        for (int x : bucket[i - 1])
            v.push_back(x * 2 + 1);

        for (int x = 0; x < (1 << i); x += 2)
            v.push_back(x);

        bucket[i] = move(v);
    }

    for (int x : bucket[n])
        co x << ' ';
    co '\n';
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