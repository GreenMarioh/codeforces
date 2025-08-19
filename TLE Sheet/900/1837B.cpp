#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxCount = 1;
    int i = 0;
    while (i < n)
    {
        int j = i;
        int count = 1;
        while (j < n - 1 && s[j] == s[j + 1])
        {
            count++;
            j++;
        }
        maxCount = max(maxCount, count);
        i = j + 1;
    }
    cout << maxCount + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}