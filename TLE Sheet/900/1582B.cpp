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
        vector<int> arr(n);
        int oneCount = 0, zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                oneCount++;
            else if (arr[i] == 0)
                zeroCount++;
        }

        long long int x = (pow(2, zeroCount)) * oneCount;
        cout << x << endl;
    }
}