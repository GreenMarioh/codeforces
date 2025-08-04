#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        bool c1 = l == r;
        bool c2 = d == u;
        bool c3 = (l + r) == (d + u);
        cout << (c1 && c2 && c3 ? "YES" : "NO") << "\n";
    }
}