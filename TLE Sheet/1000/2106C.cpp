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
    int n, x;
    ci n >> x;
    vector<int> arr1(n), arr2(n);
    rep(i, 0, n) ci arr1[i];
    rep(i, 0, n) ci arr2[i];

    int s = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] != -1)
        {
            if (s == -1)
                s = arr1[i] + arr2[i];
            else
            {
                if (s != arr1[i] + arr2[i])
                {
                    cout << 0 << '\n';
                    return;
                }
            }
        }
    }

    if (s == -1)
    {

        int ul = *max_element(all(arr1));
        int ll = *min_element(all(arr1));
        int variance = x - (ul - ll) + 1;
        co variance << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > s || s - arr1[i] > x)
        {
            cout << 0 << '\n';
            return;
        }
    }
    co 1 << endl;
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