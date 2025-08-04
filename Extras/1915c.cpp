#include <bits/stdc++.h>
using namespace std;

bool canSquare(long long int a)
{
    double n = sqrt(a);

    return n == floor(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        long long int sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum += v[i];
        }

        if (canSquare(sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}