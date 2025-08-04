#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> um;
    while (n > 0)
    {
        um[n % 10]++;
        n /= 10;
    }
    if (um[4] + um[7] == 4 || um[4] + um[7] == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}