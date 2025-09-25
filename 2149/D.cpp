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

int min_swaps_char(const string &s, char target)
{
    int n = s.size();
    vector<int> pos;
    for (int i = 0; i < n; ++i)
        if (s[i] == target)
            pos.push_back(i);
    int k = pos.size();
    if (k == 0 || k == n)
        return 0;
    vector<long long> prefix(k + 1, 0);
    for (int i = 0; i < k; ++i)
        prefix[i + 1] = prefix[i] + pos[i];
    long long res = LLONG_MAX;
    for (int i = 0; i + k <= n; ++i)
    {

        long long sum_target = (long long)k * i + (long long)k * (k - 1) / 2;
        long long sum_actual = prefix[i + k] - prefix[i];
        res = min(res, abs(sum_actual - sum_target));
    }
    return (int)res;
}

/*int min_swaps_char(const string &s, char target)
{
    int n = s.size();
    vector<int> pos;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == target)
            pos.push_back(i);
    }
    int k = pos.size();
    if (k == 0 || k == n)
        return 0;
    int res = INT_MAX;
    for (int i = 0; i + k <= n; i++)
    {
        int swaps = 0;
        for (int j = 0; j < k; j++)
            swaps += abs(pos[j] - (i + j));
        res = min(res, swaps);
    }
    return res;
}*/

void solve()
{
    int n;
    ci n;
    string s;
    ci s;
    int ans = min(min_swaps_char(s, 'a'), min_swaps_char(s, 'b'));
    co ans << endl;
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