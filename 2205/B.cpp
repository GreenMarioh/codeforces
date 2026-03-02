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

unordered_set<long long> primeFactors(long long n)
{
    unordered_set<long long> primes;

    while (n % 2 == 0)
    {
        primes.insert(2);
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            primes.insert(i);
            n /= i;
        }
    }

    if (n > 1)
    {
        primes.insert(n);
    }

    return primes;
}

void solve()
{
    int n;
    ci n;
    unordered_set<ll> st = primeFactors(n);
    ll res = 1;
    for (auto i : st)
    {
        res *= i;
    }
    co res ded
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