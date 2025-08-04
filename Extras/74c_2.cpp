#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;

        if (x & (x - 1))
        {
            cout << (x - 1) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
