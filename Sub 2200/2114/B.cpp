#include <bits/stdc++.h>
using namespace std;
int totalWays(int x, int y)
{
    int total = x + y;
    double ways = tgamma(total + 1) / (std::tgamma(x + 1) * std::tgamma(y + 1)); // tgamma = factorial :)
    return ways;
}
bool isPossible(string s, int k, int n)
{

    int half = n / 2;

    string left = s.substr(0, half);
    string right = s.substr(n - half, half);

    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    for (char i : left)
    {
        m1[i]++;
    }
    for (char i : right)
    {
        m2[i]++;
    }
    if (m1['0'] != m2['0'] || m1['1'] != m2['1'])
        return false;
    else
    {
        int x = m1['0'];
        int y = m2['1'];
        int ways = totalWays(x, y);
        if (ways >= k)
            return true;
        else
            return false;
    }
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
}