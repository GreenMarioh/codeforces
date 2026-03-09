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
    vector<int> arr1(n);
    vector<int> arr2(n);
    unordered_map<int, int> mpp;
    unordered_map<int, int> maxCount1, maxCount2;
    rep(i, 0, n)
    {
        ci arr1[i];
    }
    rep(i, 0, n)
    {
        ci arr2[i];
    }
    int currCount = 1;
    maxCount1[arr1[0]] = 1;
    rep(i, 1, n)
    {
        if (arr1[i] == arr1[i - 1])
        {
            currCount++;
        }
        else
        {
            currCount = 1;
        }
        maxCount1[arr1[i]] = max(maxCount1[arr1[i]], currCount);
    }

    currCount = 1;
    maxCount2[arr2[0]] = 1;
    rep(i, 1, n)
    {
        if (arr2[i] == arr2[i - 1])
        {
            currCount++;
        }
        else
        {
            currCount = 1;
        }
        maxCount2[arr2[i]] = max(maxCount2[arr2[i]], currCount);
    }

    int maxLen = 0;
    set<int> elements;
    rep(i, 0, n)
    {
        elements.insert(arr1[i]);
        elements.insert(arr2[i]);
    }
    for (int e : elements)
    {
        int c1 = maxCount1[e];
        int c2 = maxCount2[e];
        maxLen = max(maxLen, c1 + c2);
    }
    co maxLen << endl;
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