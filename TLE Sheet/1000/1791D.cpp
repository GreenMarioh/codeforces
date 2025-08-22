#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> prefixSet;
    unordered_set<char> suffixSet;
    vector<int> prefixes(n + 1);
    vector<int> suffixes(n + 1);

    for (int i = 0; i < n; i++)
    {
        prefixSet.insert(s[i]);
        prefixes[i] = prefixSet.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        suffixSet.insert(s[i]);
        suffixes[i] = suffixSet.size();
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, prefixes[i] + suffixes[i + 1]);
    }
    cout << res << endl;
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