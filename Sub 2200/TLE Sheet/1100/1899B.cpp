#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll res = 0;

    vector<ll> prefixSum(n);
    prefixSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = arr[i] + prefixSum[i - 1];
    }

    for (int k = 1; k <= n; k++)
    {
        if (n % k)
            continue;
        int start = k - 1;
        int x = 0;
        ll maxi = prefixSum[start];
        ll mini = prefixSum[start];
        for (int i = start + k; i < n; i += k)
        {
            ll curr = prefixSum[i] - prefixSum[i - k];
            maxi = max(maxi, curr);
            mini = min(mini, curr);
        }
        res = max(res, maxi - mini);
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}