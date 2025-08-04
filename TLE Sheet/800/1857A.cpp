#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool extraOdd = 0;
        for (int i : arr)
        {
            if ((i & 1) == 1)
                extraOdd = !extraOdd;
        }
        if (extraOdd)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}