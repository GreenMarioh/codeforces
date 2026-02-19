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
    ci n;
    vector<ll> arr(n);
    rep(i, 0, n) ci arr[i];
    vector<ll> a(n);
    ll afirst = arr[n-1], alst = arr[0];
    rep(i, 1, n-1){
        a[i] = ((arr[i-1]-arr[i])-(arr[i]-arr[i+1]))/2;
        afirst = afirst - (a[i]*ll(n-i-1));
        alst = alst - (a[i]*(ll)i);
    }
    a[0] = afirst/(n-1);
    a[n-1] = alst/(n-1);
    rep(i, 0, n){
        co a[i] << " ";
    }
    co endl;
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