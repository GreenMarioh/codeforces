#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int n, int x, vector<ll int> &arr)
{
    vector<ll> cp = arr;
    sort(cp.begin(), cp.end());
    if (cp == arr || x > 1)
        cout << "YES \n";
    else
        cout << "NO \n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(n, x, arr);
    }
}
