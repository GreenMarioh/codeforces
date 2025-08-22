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

    vector<int> digits;
    while (n > 0)
    {
        digits.push_back(n % 3);
        n /= 3;
    }
    if (digits.empty())
        digits.push_back(0);

    vector<ll> pow3(digits.size() + 2);
    pow3[0] = 1; // 3^0 hamesha 1 hoga!!
    int x = (int)pow3.size();
    for (int i = 1; i < x; i++)
        pow3[i] = pow3[i - 1] * 3;

    ll cost = 0;
    for (int i = 0; i < (int)digits.size(); i++)
    {
        if (digits[i] == 0)
            continue;
        if (i == 0)
            cost += digits[i] * 3;
        else
            cost += digits[i] * (pow3[i + 1] + i * pow3[i - 1]);
    }

    cout << cost << "\n";
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