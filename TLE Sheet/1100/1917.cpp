#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    unordered_set<char> st;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        count += st.size();
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
