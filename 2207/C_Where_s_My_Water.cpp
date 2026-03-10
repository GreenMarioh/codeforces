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
{   int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++) ci a[i];

    vector<ll> height(n);
    rep(i,0,n) height[i] = h - a[i];

    vector<int> L(n), R(n);
    stack<int> st;

    rep(i,0,n){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        L[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    while(!st.empty()) st.pop();

    per(i,0,n){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        R[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    vector<ll> bestL(n), bestR(n);

    rep(i,0,n){
        ll area = (h - a[i]) * (R[i] - L[i] - 1);
        bestL[R[i]-1] = max(bestL[R[i]-1], area);
        bestR[L[i]+1] = max(bestR[L[i]+1], area);
    }

    rep(i,1,n) bestL[i] = max(bestL[i], bestL[i-1]);
    per(i,0,n-1) bestR[i] = max(bestR[i], bestR[i+1]);

    ll ans = max(bestL[n-1], bestR[0]);

    rep(i,0,n-1){
        ans = max(ans, bestL[i] + bestR[i+1]);
    }

    cout << ans << '\n';

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