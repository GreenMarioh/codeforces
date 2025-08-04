#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<int> mpp(26);
    for (char c : s)
    {
        mpp[c - 'a']++;
    }
    int oddCount = 0;
    for (int i : mpp)
    {
        if ((i & 1) == 1)
        {
            oddCount++;
        }
    }
    if ((oddCount - 1 <= b))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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