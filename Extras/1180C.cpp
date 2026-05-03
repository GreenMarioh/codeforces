#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

#define ded << "\n";

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

#define getv(a, n)              \
    vector<int> a(n);           \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

void solve()
{
    int n, q;
    ci n >> q;
    // getv(a, n);

    deque<int> dq;
    rep(i, 0, n)
    {
        int x;
        ci x;
        dq.push_back(x);
    }

    int mx = *max_element(all(dq));
    vector<pii> initial;

    while (dq.front() != mx)
    {
        int a = dq.front();
        dq.pop_front();
        int b = dq.front();
        dq.pop_front();

        initial.push_back({a, b});

        if (a > b)
        {
            dq.push_front(a);
            dq.push_back(b);
        }
        else
        {
            dq.push_front(b);
            dq.push_back(a);
        }
    }

    vector<int> cycle;
    dq.pop_front(); // removing maxi

    while (!dq.empty())
    {
        cycle.push_back(dq.front());
        dq.pop_front();
    }

    while (q--)
    {
        long long m;
        ci m;
        if (m <= initial.size())
        {
            cout << initial[m - 1].first << " " << initial[m - 1].second << "\n";
        }
        else
        {
            ll idx = (m - initial.size() - 1) % (n - 1);
            co mx << " " << cycle[idx] << "\n";
        }
    }
}

int main()
{
    meow;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}