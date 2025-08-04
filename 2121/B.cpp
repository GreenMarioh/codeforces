#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int n)
{

    for (int len_a = 1; len_a <= n - 2; ++len_a)
    {
        for (int len_b = 1; len_b <= n - len_a - 1; ++len_b)
        {
            int len_c = n - len_a - len_b;
            string a = s.substr(0, len_a);
            string b = s.substr(len_a, len_b);
            string c = s.substr(len_a + len_b, len_c);
            string ac = a + c;
            if (ac.find(b) != string::npos)
            {
                return 1;
            }
        }
    }
    return 0;
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
        cout << (res ? "YES" : "NO") << endl;
    }
}