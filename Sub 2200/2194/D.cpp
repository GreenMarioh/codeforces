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

string steps(vector<vector<int>>& mat, int req) {
    int n = mat.size();        // rows
    int m = mat[0].size();     // cols

    string res = "";
    int remaining = req;

    for (int col = m - 1; col >= 0; col--) {
        if (remaining <= 0) {
            res = "0" + res;
            continue;
        }

        int taken = 0;

        for (int row = 0; row < n; row++) {
            taken++;
            if (mat[row][col] == 1)
                remaining--;

            if (remaining == 0)
                break;
        }

        res = to_string(taken) + res;
    }

    return res;
}

string buildPath(const string& S) {
    string path;
    int prev = 0;

    for (char c : S) {
        int cur = c - '0';
        if (cur - prev == 0) path+= 'R';
        path += string(cur - prev, 'D');
        prev = cur;
    }

    path += 'R';
    return path;
}

void solve()
{
    int m, n;
    ci n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    int ones = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ci arr[i][j];
            ones += arr[i][j];
        }
    }

    int req = ones / 2;
    ll a = (ll)req, b = ll(ones - req);
    co a*b ded
    vector<int> oc(m + 1, -1);
    oc[m] = n - 1;

    for(int col = m - 1; col >= 0; col--){
        int end = n - 1;

        for(int row = 0; row < n; row++){
            req -= arr[row][col];
            if(req == 0){
                end = row;
                break;
            }
        }

        oc[col] = end;
        if(req == 0) break;
    }

    string ans;

    for(int i = 0; i <= m; i++){
        int diff = oc[i];

        if(i != 0)
            diff -= oc[i - 1];
        else
            diff -= -1;

        for(int j = 0; j < diff; j++)
            ans.push_back('D');

        if(i < m)
            ans.push_back('R');
    }

    co ans ded
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