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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int iterations = 0;
    while (true)
    {
        bool step1 = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                a[i]--;
                step1 = true;
                break;
            }
        }
        if (!step1)
            break; // stop when step1 can't be done

        bool step2 = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                a[i]++;
                step2 = true;
                break;
            }
        }
        iterations++;
    }
    cout << iterations + 1 << "\n";
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