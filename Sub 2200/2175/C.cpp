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
    string s, t;
    ci s >> t;

    map<char,int> mps, mpt;
    for (char c : s) mps[c]++;
    for (char c : t) mpt[c]++;

    for (auto &[ch, cnt] : mps) {
        if (mpt[ch] < cnt) {
            co "Impossible\n";
            return;
        }
    }

    string res = "";
    int p = 0;

    for (int i = 0; i < 26; i++) {
        char curr = 'a' + i;
        int tc = mpt[curr];
        int sc = mps[curr];
        int extra = tc - sc;

        while (p < (int)s.length()) {
            if (s[p] > curr) break;
            res += s[p];
            p++;
        }

        res += string(extra, curr);
    }

    while (p < (int)s.length()) {
        res += s[p];
        p++;
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