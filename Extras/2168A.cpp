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
    vector<char> mp(26, -1);
    for (int i = 0; i < 26; i++)
    {
        mp[i] = 'a' + i;
    }

    string run;
    cin >> run;
    if (run == "first")
    {
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, 0, n) ci a[i];
        string res;
        rep(i, 0, n)
        {
            res += mp[a[i] - 1];
        }
        co res;
    }
    else
    {
        string s;
        cin >> s;
        co s.size() << "\n";
        rep(i, 0, (int)s.size())
        {
            char c = s[i];
            int idx = 0;
            for (int j = 0; j < 26; ++j)
            {
                if (mp[j] == c)
                {
                    idx = j + 1;
                    break;
                }
            }
            co idx;
            if (i + 1 < (int)s.size())
                co " ";
            else
                co "\n";
        }
    }
}

int main()
{
    meow;
    solve();
    return 0;
}