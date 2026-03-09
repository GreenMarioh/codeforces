#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        ll sum = 0, maxx = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            maxx = max(maxx, x);
        }

        ll dist = (px - qx) * (px - qx) + (py - qy) * (py - qy);

        if (sum * sum < dist)
        {
            cout << "No" << endl;
            continue;
        }

        ll mini = max(2 * maxx - sum, 0ll);
        if (mini * mini > dist)
        {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";
    }
    return 0;
}
