#include <bits/stdc++.h>
using namespace std;

#define ll long long;
int solve(int n, string s)
{
    bool continuous3 = 0;
    int totalCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
        {
            continuous3 = true;
            break;
        }
        if (s[i] == '.')
            totalCount++;
    }
    if (continuous3)
        return 2;
    else
        return totalCount;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        cout << solve(n, s) << "\n";
    }
}