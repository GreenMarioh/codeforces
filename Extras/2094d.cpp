#include <iostream>
#include <string>
using namespace std;

bool solve(const string &p, const string &s)
{
    int i = 0, j = 0;
    int n = p.size(), m = s.size();

    while (i < n && j < m)
    {
        char pc = p[i];
        if (pc == 'L')
        {
            if (j >= m || s[j] != 'L')
                return false;
            j++;
            if (j < m && s[j] == 'L')
            {
                j++;
            }
            i++;
        }
        else if (pc == 'R')
        {
            if (j >= m || s[j] != 'R')
                return false;
            j++;
            if (j < m && s[j] == 'R')
            {
                j++;
            }
            i++;
        }
    }

    return i == n && j == m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        if (solve(p, s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}