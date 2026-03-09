#include <bits/stdc++.h>
using namespace std;

int solve(int n, int s, vector<int> &x)
{
    int closest = 0;
    int bestDiff = abs(x[0] - s);

    for (int i = 1; i < n; i++)
    {
        int diff = abs(x[i] - s);
        if (diff < bestDiff)
        {
            bestDiff = diff;
            closest = i;
        }
    }
    int left = 0, right = n - 1;

    int strategy1 = abs(s - x[left]) + abs(x[right] - x[left]);
    int strategy2 = abs(s - x[right]) + abs(x[right] - x[left]);

    int steps = abs(s - x[closest]);

    int leftDiff = abs(x[closest] - x[left]);
    int rightDiff = abs(x[closest] - x[right]);
    int totalRange = abs(x[right] - x[left]);

    int option3a = steps + leftDiff + totalRange;

    int option3b = steps + rightDiff + totalRange;

    int strategy3 = min(option3a, option3b);

    return min({strategy1, strategy2, strategy3});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int result = solve(n, s, x);
        cout << result << endl;
    }

    return 0;
}