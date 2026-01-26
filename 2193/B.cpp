#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define co cout <<
#define ci cin >>

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
    int n,s,x;
    ci n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        ci a[i];
    }
    int i = 0; int maxi = n;
    while( i < n && a[i] == maxi){
        i++;
        maxi--;
    }
    if (i >= n){
        for(int val : a){
            co val << " ";
        }
        co "\n";
        return;
    }
    int maxIndex = i;
    for(int j = i; j < n; j++){
        if (a[j] == maxi) maxIndex = j;
    }
    reverse(a.begin() + i, a.begin() + maxIndex + 1);
    for(int x : a){
        co x << " ";
    }
    co "\n";
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