#include <bits/stdc++.h>
using namespace std;

struct Casino
{
    int l, r, real;
    bool visited = false;
};

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<Casino> casinos(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
    }

    bool updated = true;
    while (updated)
    {
        updated = false;
        for (int i = 0; i < n; ++i)
        {
            if (!casinos[i].visited && k >= casinos[i].l && k <= casinos[i].r)
            {
                casinos[i].visited = true;
                if (casinos[i].real > k)
                {
                    k = casinos[i].real;
                    updated = true;
                    break;
                }
            }
        }
    }

    cout << k << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
