#include <bits/stdc++.h>
using namespace std;

bool solve(const string &s, int n)
{

    for (int start_b = 1; start_b < n - 1; ++start_b)
    {
        for (int end_b = start_b; end_b < n - 1; ++end_b)
        {
            for (int len_a = 1; len_a <= start_b; ++len_a)
            {
                int len_c = n - end_b - 1;
                if (len_c <= 0)
                    continue;

                int len_b = end_b - start_b + 1;

                if (len_b > len_a + len_c)
                    continue;

                bool found = false;

                for (int pos = 0; pos <= len_a + len_c - len_b; ++pos)
                {
                    bool match = true;

                    for (int i = 0; i < len_b && match; ++i)
                    {
                        char ch_b = s[start_b + i];
                        char ch_ac;

                        if (pos + i < len_a)
                        {
                            ch_ac = s[pos + i];
                        }
                        else
                        {
                            ch_ac = s[end_b + 1 + (pos + i - len_a)];
                        }

                        if (ch_b != ch_ac)
                        {
                            match = false;
                        }
                    }

                    if (match)
                    {
                        found = true;
                        break;
                    }
                }

                if (found)
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