#include <bits/stdc++.h>
using namespace std;

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define co cout <<
#define ci cin >>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = b - 1; i >= a; --i)
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    vector<int> res(n);

    if (n == 2)
    {
        res = {-1, 2};
    }
    else if (n == 3)
    {
        res = {-1, 3, -1};
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                res[i] = -1;
            else
                res[i] = 2;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (res[i - 1] == -1 && res[i] == 2 && res[i + 1] == -1)
            {
                res[i] = 3;
            }
        }
    }

    for (int x : res)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    meow;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
