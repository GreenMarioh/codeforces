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

string getRandom(vector<string>& arr) {
    static random_device rd;
    static mt19937 gen(rd());

    uniform_int_distribution<> dist(0, arr.size() - 1);
    return arr[dist(gen)];
}

void solve()
{
    vector<string> ans;
    for(int i = 0; i < 3; i++){
        char x = 'A' + i;
        string tmp = ""; tmp+=x;
        string tmp2 = tmp;
        for(int j = 1; j <= 5; j++){
            char y = '0' + j;
            
            tmp += y;
            ans.push_back(tmp);
            tmp = tmp2;

        }
    }

    string res = ans[0];
    co res ded

    
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