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

    if (k == n * n - 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<string> grid(n, string(n, 'U'));

    // int cnt = 0;

    /*    for (int i = 0; i < n && cnt < k; i++)
        {
            for (int j = 0; j < n && cnt < k; j++)
            {
                grid[i][j] = 'U';
                cnt++;
            }
        }*/

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'U' && (i * n + j) >= k)
            {
                if (j < n - 1)
                {
                    grid[i][j] = 'R';
                }
                else
                {
                    if (i < n - 1)
                    {
                        grid[i][j] = 'D';
                    }
                    else
                    {
                        grid[i][j] = 'L';
                    }
                }
            }
        }
    }

    // int startrow = k / n;
    // int startcol = k % n;

    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int pos = i * n + j;
            if (pos >= k)
            {
                if (j < n - 1)
                {
                    grid[i][j] = 'R';
                }
                else if (i < n - 1)
                {
                    grid[i][j] = 'D';
                }
                else
                {
                    grid[i][j] = 'L';
                }
            }
        }
    }*/

    for (int i = 0; i < n; i++)
    {
        co grid[i] << '\n';
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