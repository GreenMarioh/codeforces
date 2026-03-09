#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int mult = 0;
    int coins = 0;
    int i = n - 1;
    while (i >= 0)
    {
        if ((arr[i] << mult) > c)
        {
            coins++;
        }
        else
        {
            mult++;
        }
        i--;
    }
    cout << coins << endl;
}

int main()
{
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}