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

        int x = (n - m);
        bool isEven = (x % 2 == 0);
        int l_, r_;
        if (isEven)
        {
            if (l < 0)
            {
                int l1 = min(l + x - 1, r - x - 1);
                cout << l1 << " " << l1 + m << "\n";
            }
            else if (l > 0)
            {
                int l1 = min(l - x - 1, r - x - 1);
                cout << l1 << " " << l1 + m << "\n";
            }
            else
            {
                cout << "0" << " " << m << "\n";
            }
        }
        else
        {
            if (l < 0)
            {
                int l1 = min(l + x, r - x - 1);
                cout << l1 << " " << l1 + m << "\n";
            }
            else if (l > 0)
            {
                int l1 = min(l - x, r - x - 1);
                cout << l1 << " " << l1 + m << "\n";
            }
            else
            {
                cout << "0" << " " << m << "\n";
            }
        }
    }
}
