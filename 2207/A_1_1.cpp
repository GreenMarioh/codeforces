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

vector<int> onesLengths(string s) {
    vector<int> res;
    int cnt = 0;

    for (char c : s) {
        if (c == '1') {
            cnt++;
        } else {
            if (cnt > 0) res.push_back(cnt);
            cnt = 0;
        }
    }

    if (cnt > 0) res.push_back(cnt);

    return res;
}

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    for (int i = 1; i < n - 1; i++){
        if (s[i-1] == '1' && s[i+1] == '1'){
            s[i] = '1';
        }
    }
    for(char c:s){
        if (c == '1') maxi++;
    }
    int mini = 0;
    vector<int> x = onesLengths(s);
    for(int i:x){
        mini += (i+2)/2;
    }
    //for(int i:x) co i << " " ded;
    co mini << " " << maxi ded



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