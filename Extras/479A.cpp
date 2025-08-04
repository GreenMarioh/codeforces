#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    if (v[0] == 1 && v[2] != 1)
    {
        cout << (v[0] + v[1]) * v[2];
    }
    else if (v[2] == 1)
    {
        cout << 3;
    }
    else
        cout << a * b * c;
}