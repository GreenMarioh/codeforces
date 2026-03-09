#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            a[i - 1] -= a[i];
        }
        else
        {
            a[i] -= a[i - 1];
        }
    }

    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}