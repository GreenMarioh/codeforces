#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int zeroes = 0, ones = 0;
        for (char c : s)
        {
            if (c == '0')
                zeroes++;
            else
                ones++;
        }
        int x = min(zeroes, ones);
        if ((x & 1))
        {
            cout << "DA\n";
        }
        else
            cout << "NET\n";
    }
}