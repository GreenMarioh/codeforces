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

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];


    vector<int> idx;
    rep(i, 0, n) {
        if ((int)idx.size() < 3) idx.push_back(i);
    }

    bool all_zero = true;
    rep(i, 0, n) {
        if (arr[i] != 0) {
            all_zero = false;
            if (find(all(idx), i) == idx.end()) idx[2] = i;
            break;
        }
    }

    if (all_zero) {
        co "-1\n";
        return;
    }

    vector<int> p = idx;
    sort(all(p));
    do {
        int i = p[0], j = p[1], k = p[2];
        if (arr[i] + arr[j] != arr[k]) {
            co i + 1 << " " << j + 1 << " " << k + 1 ded
            return;
        }
    } while (next_permutation(all(p)));
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
