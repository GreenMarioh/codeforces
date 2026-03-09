#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int k, int n)
{
    int res = 0;
    for (int i = 0; i <= n - k;)
    {
        bool canReach = true;

                for (int j = i; j < i + k; j++)
        {
            if (arr[j] == 1)
            {
                canReach = false;
                break;
            }
        }

        if (canReach)
        {

            if (i + k < n)
                arr[i + k] = 1;
            res++;
            i += k;
        }
        else
        {
            i++;
        }
    }
    cout << res << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, k, n);
    }
}
