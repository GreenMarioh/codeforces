#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    sort(s.begin(), s.end());
    int x = s[0].size();
    int res = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[0][i] == s[n - 1][i])
            res++;
        else
            break;
    }

    cout << res;
}