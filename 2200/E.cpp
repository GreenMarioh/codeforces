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

int minPrime(int x){
    set<int> s;
    for(int i = 2; i*i<=x; i++){
        while(x%i==0){
            s.insert(i);
            x/=i;
        }
    }
    if (x > 1) s.insert(x);
    if (s.size() > 1) return -1;
    if (s.size() == 0) return 1;
    return *s.begin();
}

void solve()
{
    int n;
    ci n;
    vector<int> arr(n);
    rep(i, 0, n) ci arr[i];
    vector<int> b(n);
    for(int i = 0; i < n; i++) b[i] = minPrime(arr[i]);
    if (is_sorted(all(arr))){
        co "Bob\n";
    } else if (*min_element(all(b)) == -1){
        co "Alice\n";
    } else if (is_sorted(all(b))){
        co "Bob\n";
    } else {
        co "Alice\n";
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