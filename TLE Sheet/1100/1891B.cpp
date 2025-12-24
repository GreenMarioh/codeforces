#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> x(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> x[i];

    ll last = 31;
    for (int i = 0; i < q; i++)
    {
        if (x[i] >= last) continue;
        ll val = pow(2, x[i]);
        for(int j = 0; j < n; j++){
            if (a[j]%val == 0) a[j] += (val/2);
        }
        last = x[i];
    }

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
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
