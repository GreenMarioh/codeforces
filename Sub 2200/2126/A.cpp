#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int res = 9;
    while (n > 0)
    {
        int tmp = n % 10;
        res = min(res, tmp);
        n /= 10;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }
}