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

bool xorSum(vector<int> &a, int l, int r){
    int x = a[l];
    for(int i = l + 1; i < r; i++){
        x ^= a[i];
    }
    return x == 0;
}

void solve()
{
    int n;
    ci n;
    vector<int> a(n);
    rep(i, 0, n) ci a[i];
    int q;
    ci q;
    //vector<int> l(q), r(q);
    vector<int> prevDiff(n);
        prevDiff[0] = -1; 
        int lastDiff = -1;
        for(int i = 1; i < n; i++){   
            if (a[i] != a[i-1]){
                lastDiff = i-1;
            }
            prevDiff[i] = lastDiff;
        }

    int i = 0;
    while(i < q){
        int l, r;
        ci l >> r;
        r--; l--;
        if (prevDiff[r] < l){
            co "-1 -1\n";
        } else {
            co prevDiff[r] + 1 << " " << r + 1 ded;
        }
        i++;
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