#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int x, vector<ll int> &arr)
{
    ll int maxCap = INT_MIN;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        maxCap = max(maxCap, arr[i] - arr[i - 1]);
    }
    cout << maxCap << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll int> arr(n + 2);
        arr[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        arr[n + 1] = arr[n] + 2 * (x - arr[n]);
        solve(x, arr);
    }
}