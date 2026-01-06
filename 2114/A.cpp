#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int root = sqrt(n);

        if (root * root == n)
        {
            int n1 = root / 2;
            int n2 = root - n1;
            cout << n1 << " " << n2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}