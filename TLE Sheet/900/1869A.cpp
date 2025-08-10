#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if ((n & 1) == 0)
        {
            cout << "2\n";
            cout << 1 << " " << n;
            cout << endl;
            cout << 1 << " " << n;
            cout << endl;
        }
        else
        {
            cout << "4\n";
            cout << 1 << " " << n - 1;
            cout << endl;
            cout << 1 << " " << n - 1;
            cout << endl;
            cout << n - 1 << " " << n;
            cout << endl;
            cout << n - 1 << " " << n;
            cout << endl;
        }
    }
}