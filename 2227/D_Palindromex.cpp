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

#define getv(a,n) \
    vector<int> a(n); \
    for(int i=0;i<n;i++) cin >> a[i];

void solve()
{
    int n; ci n;
    int first0, second0;
    bool alr = 0;
    vector<int> a(2*n);
    for(int i = 0; i <2*n; i++){
        ci a[i];
        if (a[i] == 0){
            if (!alr) {
                first0 = i; alr = 1;
            }
            else second0 = i;
        }
    }
    int res = INT_MIN;
    int i = first0, j = i;

    vector<int> vis(n, 0);
    while(i>= 0 && j<2*n){
        if (a[i] != a[j]) break;
        vis[a[i]] = 1;
        i--; j++;
    }
    int m = 0;
    while(m < n && vis[m]) m++;
    res = max(res, m);

    vis.assign(n, 0);

    i = second0, j = i;
    while(i>= 0 && j<2*n){
        if (a[i] != a[j]) break;
        vis[a[i]] = 1;
        i--; j++;
    }
    m = 0;
    while(m < n && vis[m]) m++;
    res = max(res, m);

    vis.assign(n, 0);

    i = first0, j = second0;

    bool ok = 1;
    while(i < j){
        if (a[i] != a[j]){
            ok = 0;
            break;
        }
        vis[a[i]] = 1;
        i++; j--;
    }
    if (ok){
        if (i == j) vis[a[i]] = 1; 

        i = first0;
        j = second0;

        while(i >= 0 && j < 2*n && a[i] == a[j]){
            vis[a[i]] = 1;
            i--; j++;
        }

        m = 0;
        while(m < n && vis[m]) m++;
        res = max(res, m);
    }


    co res ded

    
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