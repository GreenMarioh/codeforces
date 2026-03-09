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

    bool check(long long n, long long s, long long m){
    long long rem = s;

    for(int i = 60; i >= 0; i--){
        if((m >> i) & 1){
            long long coin = 1LL << i;
            long long take = min(n, rem / coin);
            rem -= take * coin;
        }
    }
    return rem == 0;
}

void solve()
{
    long long s, m;
    cin >> s >> m;

    long long l = 1, r = s;
    long long res = -1;

    while(l <= r){
        long long mid = l + (r - l) / 2;

        if(check(mid, s, m)){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
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