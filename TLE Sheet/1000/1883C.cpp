#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long ans = INT_MAX;
    long long even_count = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even_count++;
        if (a[i] % k == 0)
            ans = 0;
        ans = min(ans, (k - a[i] % k));
    }
    if (k == 4)
    {
        if (even_count >= 2)
            ans = min(ans, 0LL);
        else if (even_count == 1)
            ans = min(ans, 1LL);
        else if (even_count == 0)
            ans = min(ans, 2LL);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}