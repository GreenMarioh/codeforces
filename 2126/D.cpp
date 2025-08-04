#include <bits/stdc++.h>
using namespace std;

struct Casino
{
    int l, r, real;
    int index;
};

void solve(vector<Casino> &casinos, int n, int k)
{

    set<int> importantValues;
    importantValues.insert(k);
    for (int i = 0; i < n; i++)
    {
        importantValues.insert(casinos[i].l);
        importantValues.insert(casinos[i].r);
        importantValues.insert(casinos[i].real);
    }

    vector<int> values(importantValues.begin(), importantValues.end());

    map<int, int> dp;
    dp[0] = k;

    int maxCoins = k;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        if (dp.find(mask) == dp.end())
            continue;

        int currentCoins = dp[mask];
        maxCoins = max(maxCoins, currentCoins);

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                continue;

            if (currentCoins >= casinos[i].l && currentCoins <= casinos[i].r)
            {
                int newMask = mask | (1 << i);
                int newCoins = casinos[i].real;
                dp[newMask] = max(dp[newMask], newCoins);
            }
        }
    }

    cout << maxCoins << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<Casino> casinos(n);
        for (int i = 0; i < n; i++)
        {
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
            casinos[i].index = i;
        }

        solve(casinos, n, k);
    }

    return 0;
}