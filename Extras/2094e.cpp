#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        int max_sum = 0;
        for (int k = 0; k < n; ++k)
        {
            int current_sum = 0;
            for (int i = 0; i < n; ++i)
            {
                current_sum += (a[k] ^ a[i]);
            }
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
        cout << max_sum << '\n';
    }
    return 0;
}