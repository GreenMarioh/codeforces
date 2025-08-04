#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ones = 0, zeroes = 0;
    for (char c : s)
    {
        if (c == '1')
            ones++;
        else
            zeroes++;
    }

    // int res = 0;
    int finalLen = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && zeroes != 0)
        {
            zeroes--;
            finalLen++;
        }
        else if (s[i] == '0' && ones != 0)
        {
            ones--;
            finalLen++;
        }
        else
            break;
    }
    cout << n - finalLen << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}