#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define co cout <<
#define ci cin >>

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n;
    ci n;
    vector<ll> res;
    ll p = 10;
    while (true)
    {
        if (p > LLONG_MAX - 1)
            break;
        ll divisor = p + 1;
        if (divisor > n)
            break;
        if (n % divisor == 0)
        {
            res.push_back(n / divisor);
        }
        if (p > LLONG_MAX / 10)
            break;
        p *= 10;
    }
    if (res.empty())
    {
        co 0 << '\n';
    }
    else
    {
        sort(res.begin(), res.end());
        co(int) res.size() << '\n';
        for (size_t i = 0; i < res.size(); ++i)
        {
            co res[i] << (i + 1 == res.size() ? '\n' : ' ');
        }
    }
}

int main()
{
    meow;
    int t;
    ci t;
    while (t--)
        solve();
    return 0;
}
