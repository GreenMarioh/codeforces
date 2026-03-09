#include <bits/stdc++.h>
using namespace std;

bool solve(const string &s, int n)
{
    // Try all possible ways to split s into three non-empty parts a, b, c
    // such that a + b + c = s and b is a substring of a + c

    for (int i = 1; i < n - 1; i++)
    { // End of part 'a'
        for (int j = i + 1; j < n; j++)
        { // End of part 'b'
            // Split the string
            string a = s.substr(0, i);     // s[0...i-1]
            string b = s.substr(i, j - i); // s[i...j-1]
            string c = s.substr(j);        // s[j...n-1]

            // Check if b is a substring of a + c
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