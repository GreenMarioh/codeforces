// Note to self: Always use endl instead of \n in interactive problems;


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

int q(vector<int> &s){
    if (s.size() == 0) return 0;
    co "? " << s.size();
    rep(i, 0, s.size()){
        co " " << s[i];
    } cout << endl; cout.flush();
    int res;
    cin >> res;
    if (res == -1) exit(0);
    return res;

}

int makeArr(int l, int r){
    if (l > r) return 0;
    vector<int> a;
    for(int i = l; i <= r; i++) a.push_back(i);
    return q(a);
}

void solve()
{
    int n; ci n;
    int N = 2*n+1;

    int l = 1, hi = N, i3 = N;
    while( l <= hi){
        int mid = l + (hi - l)/2;
        if (makeArr(1, mid)%2 != mid%2){
            i3 = mid;
            hi = mid -1;
        } else {
            l = mid+1;
        }
    }

    l = 1, hi = N;
    int i1 = 1;
    while(l <= hi){
        int mid = l + (hi - l)/2;
        if (makeArr(mid, N)%2 != (N-mid+1)%2){
            i1 = mid; l = mid+1;
        } else {
            hi = mid-1;
        }
    }
    l = 1, hi = i3 - 1;
    int i2 = hi;
    while(l <= hi){
        int mid = l + (hi - l)/2;
        
        vector<int> a;
        rep(i, 1, mid+1) a.push_back(i);
        a.push_back(i3);
        if (q(a)%2 != (mid+1)%2){
            i2 = mid; hi = mid-1;
        }

        else {
            l = mid+1;
        }
    }
    

    co "! " << i1 << " " << i2 << " " << i3 ded
    cout.flush();
    
    
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