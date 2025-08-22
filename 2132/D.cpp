#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define co cout <<
#define ci cin >>

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

ll sumDigitsUpto(ll n)
{
    if (n <= 0)
        return 0;
    ll res = 0, factor = 1;
    while (factor <= n)
    {
        ll lower = n % factor;
        ll curr = (n / factor) % 10;
        ll higher = n / (factor * 10);

        res += higher * 45 * factor;
        res += curr * (curr - 1) / 2 * factor;
        res += curr * (lower + 1);

        factor *= 10;
    }
    return res;
}

void solve()
{
    ll k;
    ci k;

    ll len = 1;
    ll cnt = 9;
    ll start = 1;

    while (k > len * cnt)
    {
        k -= len * cnt;
        start *= 10;
        len++;
        cnt *= 10;
    }

    ll full = (k - 1) / len;
    ll rem = (k - 1) % len;

    ll number = start + full;

    ll ans = sumDigitsUpto(number - 1);

    string s = to_string(number);
    for (int i = 0; i <= rem; i++)
    {
        ans += s[i] - '0';
    }

    co ans << '\n';
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
