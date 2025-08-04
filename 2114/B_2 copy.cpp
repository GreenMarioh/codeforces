#include <bits/stdc++.h>
using namespace std;

bool isPossible(string s, int k, int n)
{
    int count0 = count(s.begin(), s.end(), '0');
    int count1 = n - count0;

    int pairs = n / 2;
    if (k > pairs)
    {
        return false;
    }

    int maxEqual = count0 / 2 + count1 / 2;

    for (int pairs00 = 0; pairs00 <= min(k, count0 / 2); pairs00++)
    {
        int pairs11 = k - pairs00;

        if (pairs11 > count1 / 2)
            continue;

        int remaining0 = count0 - 2 * pairs00;
        int remaining1 = count1 - 2 * pairs11;

        int needDifferent = pairs - k;

        if (remaining0 >= needDifferent && remaining1 >= needDifferent)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (isPossible(s, k, n))
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