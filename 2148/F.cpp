#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define co cout <<
#define ci cin >>

#define vi vector<int>
#define vll vector<long long>

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()

void solve() // did not work.
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i].resize(k);
        for (int j = 0; j < k; j++)
            cin >> arr[i][j];
        max_len = max(max_len, k);
    }

    int best = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[best])
            best = i;
    }

    vector<int> result = arr[best];
    for (int j = arr[best].size(); j < max_len; j++)
    {
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if ((int)arr[i].size() > j)
                mn = min(mn, arr[i][j]);
        }
        result.push_back(mn);
    }

    for (int i = 0; i < (int)result.size(); i++)
    {
        if (i)
            cout << " ";
        cout << result[i];
    }
    cout << "\n";
}

int main()
{
    meow;
    int t;
    ci t;
    while (t--)
    {
        solve();
    }
    return 0;
}
