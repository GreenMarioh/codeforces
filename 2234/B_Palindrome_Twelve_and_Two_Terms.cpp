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


bool pal(ll x){
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

ll makeOdd(string s){
    string t = s;
    t.pop_back();
    reverse(t.begin(), t.end());
    return stoll(s + t);
}

ll makeEven(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return stoll(s + t);
}

void solve(){
    ll n;
    cin >> n;

    if(n % 12 == 0){
        co 0 << " " << n << '\n';
        return;
    }

    for(ll i = 1; i <= 1000000; i++){

        ll a = makeOdd(to_string(i));

        if(a <= n && (n-a)%12 == 0){
            co a << " " << (n - a) << '\n';
            return;
        }

        a = makeEven(to_string(i));

        if(a <= n && (n -a)%12 == 0){
            co a << " " << (n - a) << '\n';
            return;
        }
    }

    co "-1\n";
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