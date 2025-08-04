#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(2 * n + 2);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
            {
                int x;
                cin >> x;
                p[i + j + 2] = x;
            }
        for (int i = 2; i <= 2 * n; ++i)
            cout << p[i] << " ";
        cout << endl;
    }
}
