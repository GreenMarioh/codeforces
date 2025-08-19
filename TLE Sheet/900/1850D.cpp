#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int maxLen = 0;
    int i = 0;

    while (i < n)
    {
        int j = i;

        while (j + 1 < n && arr[j + 1] - arr[j] <= k)
        {
            j++;
        }

        maxLen = max(maxLen, j - i + 1);

        i = j + 1;
    }

    cout << n - maxLen << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
