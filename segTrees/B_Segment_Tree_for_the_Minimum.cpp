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

vector<int> seg;

void build(int i, int l ,int r, vector<int>& arr){
    if (l == r) seg[i] = arr[l];
    else {
        int mid = (l+r)/2;
        build(2*i+1, l, mid, arr);
        build(2*i+2, mid+1, r, arr);
        seg[i] = min(seg[2*i+1],seg[2*i+2]);
    }
}

void update(int i, int l, int r, int pos, int val){
    if (l == r) seg[i] = val;
    else {
        int mid = (l+r)/2;
        if (pos <= mid) update(2*i+1, l, mid, pos, val);
        else update(2*i+2, mid+1, r, pos, val);
        seg[i] = min(seg[2*i+1],seg[2*i+2]); 
    }
}

int query(int i, int l, int r, int ql, int qr){
    if (qr < l || r < ql) return INT_MAX;
    if (ql <= l && r <= qr) return seg[i];
    else {
        int mid = (l+r)/2;    
        return min(query(2*i+1, l, mid, ql, qr), query(2*i+2, mid+1, r, ql, qr));
    }
}

void solve()
{
    int n, q; ci n >> q;
    getv(a, n);
    seg.resize(4*n);
    build(0, 0, n-1, a);
    while(q--){
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1) update(0, 0, n-1, l, r);
        else {
            co query(0, 0, n-1, l, r-1) ded
        }
    }

    
}

int main()
{
    meow;
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}