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
        int n;
        ci n;
        string s;
        ci s;
        if (n == 1 || n == 2) {
            co "1\n"; return;
        }
        // if (s == "001"){
        //     co "2\n"; return;
        // }
        int c = 0;
        if (s[0] == '0' && s[1] == '0') s[1] = '1'; 
        
        for(int i = 0; i < n; i++){
            c++;
            if (s[i] == '1') c = 0;
            if (c==3){
                if (s[i+1] == 1 || (i + 1 == n)){
                    s[i-1] = '1';
                    c = 1;
                }
                else {
                    s[i] = '1';
                    c = 0;
                }
            }
        }
        int res = 0;
        if (s[n-1] == '0' && s[n-2] == '0') res++;
        for(auto c:s){
            if (c=='1') res++;
        }
        co res << "\n";

          

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