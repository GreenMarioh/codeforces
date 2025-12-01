#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<int, int>> idx(n);
    for (int i = 0; i < n; i++)
        idx[i] = {arr[i], i};

    sort(idx.begin(), idx.end());

    vector<long long> pref(n);
    pref[0] = idx[0].first;
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + idx[i].first;

    vector<int> reach(n);
    reach[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (pref[i] < idx[i + 1].first)
            reach[i] = i;
        else
            reach[i] = reach[i + 1];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        ans[idx[i].second] = reach[i];

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/* LOGIC coz baad mei bhool jaaoge

Let ans[i] = 0 initially.
For sorted array idx[]:

ans[last_element] = last_position

Now go backwards:
If prefix[i] < idx[i+1].value,
    then this element cannot reach beyond i (stop expanding)
Else:
    this element inherits ans[i+1]


*/