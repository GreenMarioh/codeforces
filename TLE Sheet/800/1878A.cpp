#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = 0;
    for (int i : arr)

    {

        if (i == t)
        {
            flag = 1;
            cout << "YES\n";
        };
    }
    if (!flag)
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}