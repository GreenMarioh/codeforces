#include <bits/stdc++.h>
using namespace std;

bool solve(const string &s)
{
    int n = s.size();

    for (int i = 1; i < n - 1; ++i)
    {
        char b = s[i];

        string ac = s.substr(0, i) + s.substr(i + 1);

        if (ac.find(b) != string::npos)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        cout << (solve(s) ? "YES" : "NO") << '\n';
    }
}
