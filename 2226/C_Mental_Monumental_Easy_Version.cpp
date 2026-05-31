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

/*int checkMax(vector<int> &arr){
    vector<int> mex(1e6, 0);
    int n = arr.size();
    for(int i:arr){
        mex[i] = 1;
    }
    int res =0 ;
    int i = 0;
    while(i < n-1){
        if (mex[i] == 1) {res++; i++;}
        else break;
    }
    return res;
}*/


bool check(int mex, multiset<int> &ms){
    vector<int> rem;
    bool ok = 1;
    per(i, 0, mex){
        if (ms.count(i)){
            rem.push_back(i);
            ms.erase(ms.find(i));
        }

        else {
            int x = *ms.rbegin();
            if (x < 2*i+1){
                ok = false;
                break;
            }
            rem.push_back(x);
            ms.erase(ms.find(x));
        }
    }

    for(int x:rem) ms.insert(x);
    return ok;
}

void solve()
{
    int n; ci n;
    getv(a, n);
    
    //sort(all(a));

    multiset<int> st(all(a));
    int l = 0, r = n+1;

    while(l<r){
        int mid = l+(r-l)/2;

        if (check(mid, st)){
            l = mid+1;
        } else {
            r= mid;
        }
    }

    co l-1 ded



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