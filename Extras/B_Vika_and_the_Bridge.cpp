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


void solve(){
    int n, k;
    ci n >> k;
    getv(a, n);
    vector<vector<int>> pos(k+1);
    for(int i = 0; i < n; i++) pos[a[i]].push_back(i);
    
    int res = INT_MAX;
    for(int i = 1; i <= k; i++){
        vector<int> gaps;
        int last = -1;
        for(int x:pos[i]){
            gaps.push_back(x-last-1);
            last = x;
        }
        gaps.push_back(n-last-1);
        sort(all(gaps), greater<int>());
        int largest = gaps[0];
        int second = (gaps.size() >1 ? gaps[1] : 0);
        int best = max(largest/2, second);
        res = min(res, best);
    }

    co res ded
}

/*bool check(vector<int> &a, int m, int n){
    bool used = 0;
    for(int i = 0; i <= n; i+=m){
        if (i+m >= n) return true;
        if (a[i] == a[i+m]) continue;
        else if (!used){
            used = true;
            continue;
        } else return false;
    }
    return true;
}

void solve()
{
    int n, k; ci n >> k;
    getv(a, n);
    int l = 1, r = n;
    int res = INT_MAX;
    while(l <= r){
        int mid = l + (r-l)/2;
        if (check(a, mid, n)){
            res = min(res, mid);
            r = mid-1;
        } else l = mid + 1;
    }
    co res ded
    
}*/

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