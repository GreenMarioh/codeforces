#include <bits/stdc++.h>
using namespace std;

bool solve(const string &s, int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j);

            string ac = a + c;
            if (ac.find(b) != string::npos)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool res = solve(s, n);
        cout << (res ? "YES" : "NO") << "\n";
    }

    return 0;
}
