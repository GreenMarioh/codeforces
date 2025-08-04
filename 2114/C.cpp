#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }

        // Remove duplicates and sort
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        n = a.size();

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        // Now we want to find the maximum number of elements we can select
        // such that no two selected elements are consecutive integers
        // This is similar to the "House Robber" problem

        // dp[i] = maximum elements we can select from a[0..i]
        vector<int> dp(n);
        dp[0] = 1;

        for (int i = 1; i < n; i++)
        {
            // Option 1: Don't take current element
            dp[i] = dp[i - 1];

            // Option 2: Take current element
            int take = 1;
            if (a[i] != a[i - 1] + 1)
            {
                // Current element is not consecutive to previous
                take += dp[i - 1];
            }
            else
            {
                // Current element is consecutive to previous
                if (i >= 2)
                {
                    take += dp[i - 2];
                }
            }

            dp[i] = max(dp[i], take);
        }

        cout << dp[n - 1] << endl;
    }

    return 0;
}