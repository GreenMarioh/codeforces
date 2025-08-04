#include <bits/stdc++.h>
using namespace std;

bool isPossible(string s, int k, int n)
{
    int count0 = count(s.begin(), s.end(), '0');
    int count1 = n - count0;

    // Number of pairs we can form (positions that need to match/not match)
    int pairs = n / 2;

    // We can't have more good pairs than total pairs
    if (k > pairs)
    {
        return false;
    }

    // To have exactly k good pairs:
    // - k pairs must be equal (both 0 or both 1)
    // - (pairs - k) pairs must be different (one 0, one 1)

    // For k equal pairs, we can use:
    // - up to count0/2 pairs of 00
    // - up to count1/2 pairs of 11
    int maxEqual = count0 / 2 + count1 / 2;

    // For (pairs - k) different pairs, we need (pairs - k) zeros and (pairs - k) ones
    // After using characters for equal pairs, we have:
    // - remaining zeros: count0 - 2*(number of 00 pairs used)
    // - remaining ones: count1 - 2*(number of 11 pairs used)

    // Try all possible distributions of equal pairs
    for (int pairs00 = 0; pairs00 <= min(k, count0 / 2); pairs00++)
    {
        int pairs11 = k - pairs00;

        if (pairs11 > count1 / 2)
            continue;

        int remaining0 = count0 - 2 * pairs00;
        int remaining1 = count1 - 2 * pairs11;

        int needDifferent = pairs - k;

        // Check if we can form needDifferent different pairs
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