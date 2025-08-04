#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;
        long long y = x - 1;
        while (y > 0)
        {
            long long xo = x ^ y;
            if (x + y > xo && x + xo > y && y + xo > x)
            {
                cout << y << "\n";
            }
            else
            {
                cout << "-1\n";
            }
            y--;
        }
    }
    return 0;
}