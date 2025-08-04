#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (m == n)
        {
            cout << l << " " << r << "\n";
            continue;
        }

        int spread = n - m;
        int left_spread = spread / 2;
        int right_spread = spread - left_spread;

        int l_prime = l + left_spread;
        int r_prime = r - right_spread;

        // Ensure the segment is valid
        if (l_prime > r_prime)
        {
            // Adjust spreads if needed
            left_spread = min(left_spread, (r - l - m) / 2);
            right_spread = spread - left_spread;
            l_prime = l + left_spread;
            r_prime = r - right_spread;
        }

        cout << l_prime << " " << r_prime << "\n";
    }
    return 0;
}