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
    string a, b;
    ci a;
    ci b;

    int totLeft = 0;
    for(char i:a) if (i == '(') totLeft++;
    for(char i:b) if (i == '(') totLeft++;

    if (totLeft != n){
        co "NO\n"; return;
    }

    int c1 = 0, c2 = 0;

    for(int i = 0; i <n; i++){
        if (a[i] == '(' && b[i] == '(') {
            c1++; c2++;
        }
        else if (a[i] == ')' && b[i] == ')'){
            c1--; c2--;
        }
        else {
            if (c1 <c2) {c1++; c2--;}
            else {c1--; c2++;}
        }

        if (c1 < 0 || c2 < 0) {
            co "NO\n"; return;
        }
    }
    co "YES\n";
    

    
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