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

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

vector<ll> sieve(int n) {
  vector<bool> p(n + 1, 1);
  p[0] = p[1] = 0;
  for (ll i = 2; i * i <= n; i++)
    if (p[i])
      for (ll j = i * i; j <= n; j += i)
        p[j] = 0;
  vector<ll> primes;
  for (ll i = 2; i <= n; i++)
    if (p[i])
      primes.push_back(i);
  return primes;
}

vll primes = sieve(3e5);


void solve()
{
    int n; ci n;
    vll a(n);
    a[0] = primes[0];
    for(int i = 1; i < n - 1; i++){
        a[i] = primes[i-1]*primes[i];
    }
    if (n >= 2) a[n-1] = primes[n-2];
    for(ll i:a){
        co i << " ";
    } cout ded
    
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