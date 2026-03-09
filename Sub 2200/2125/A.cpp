#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s)
{
    int n = s.size();
    vector<int> map(26, 0);
    for (char c : s)
    {
        map[c - 'A']++;
    }
    string res = "";
    while (map['T' - 'A'] > 0)
    {
        res += 'T';
        map['T' - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        while (map[i]--)
        {
            res += 'A' + i;
        }
    }
    cout << res << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}