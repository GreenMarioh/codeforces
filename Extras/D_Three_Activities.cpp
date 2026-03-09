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

vector<int> getIndices(vector<int> &a, int n){
    int mx1 = -1, mx2 = -1, mx3 = -1;
    for(int i = 0; i < n; i++){
        if (mx1 == -1 || a[i] > a[mx1] ){
            mx3 = mx2; mx2 = mx1; mx1 = i;
        }
        else if (mx2 == -1 || a[i] > a[mx2]){
            mx3 = mx2; mx2 = i;
        } else if (mx3 == -1 || a[i] > a[mx3]){
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for(int i = 0 ; i < n; i++) ci a[i];
    for(int i = 0 ; i < n; i++) ci b[i];
    for(int i = 0 ; i < n; i++) ci c[i];

    vector<int> x = getIndices(a, n), y = getIndices(b, n), z = getIndices(c, n);
    int res = 0;
    for(int i:x){
        for(int j:y){
            for(int k:z){
                if (i!=j && j!=k && k != i) res = max(res, a[i] + b[j] + c[k]); 
            }
        }
    }
    co res ded
   //pair<int, int> maxSki = {-1, -1}, maxMovie = {-1, -1}, maxBoard = {-1, -1};
    

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