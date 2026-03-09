#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, int>

void solve()
{
    int n, k;
    cin >> n >> k;
    k--; // make 0-based

    vector<ll> h(n);
    ll max_h = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
        max_h = max(max_h, h[i]);
    }

    if (h[k] == max_h)
    {
        cout << "YES\n";
        return;
    }

    // Dijkstra-like approach
    vector<ll> minTime(n, LLONG_MAX);
    priority_queue<pii, vector<pii>, greater<>> pq;
    minTime[k] = 0;
    pq.push({0, k});

    while (!pq.empty())
    {
        auto [time, u] = pq.top();
        pq.pop();

        if (time >= h[u])
            continue; // drowned at this tower

        for (int v = 0; v < n; ++v)
        {
            if (u == v)
                continue;
            ll cost = abs(h[u] - h[v]);
            ll newTime = time + cost;
            if (newTime < minTime[v] && newTime < h[v])
            {
                minTime[v] = newTime;
                pq.push({newTime, v});
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (h[i] == max_h && minTime[i] < h[i])
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
