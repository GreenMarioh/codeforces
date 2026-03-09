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
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for(char c:s){
        if (c == '0') count0++; else count1++;
    }

    if ((n&1)==1 && (count1&1)== 1){
        co "-1" << endl;
        return;
    }
    if (count0%2==1){
        co count0 << endl;
        for(int i = 0; i < n; i++){
            if (s[i] == '0'){
                co i + 1 << " ";
            }
        } co endl; return;
    }else {
        co count1 << endl;
        if (count1 == 0) return;
        for(int i = 0; i< n; i++){
            if (s[i] == '1'){
                co i + 1 << " ";
          }
        }    co endl; return;
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