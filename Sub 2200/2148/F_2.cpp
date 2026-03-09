#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define co cout <<
#define ci cin >>

#define vi vector<int>
#define vll vector<long long>

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    int max_len = 0;
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        arr[i].resize(k);
        for (int j = 0; j < k; ++j)
            cin >> arr[i][j];
        max_len = max(max_len, k);
    }

    vector<vector<int>> buckets(max_len);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < (int)arr[i].size(); ++j)
            buckets[j].push_back(i);
    }

    for (int col = 0; col < max_len; ++col)
    {
        auto &b = buckets[col];
        sort(b.begin(), b.end(), [&](int x, int y)
             {
            if (arr[x][col] != arr[y][col]) return arr[x][col] < arr[y][col];
            int ix = col, iy = col;
            while (ix < (int)arr[x].size() && iy < (int)arr[y].size()) {
                if (arr[x][ix] != arr[y][iy]) return arr[x][ix] < arr[y][iy];
                ++ix; ++iy;
            }
            return (int)arr[x].size() - col < (int)arr[y].size() - col; });
    }

    vector<int> ptr(max_len, 0);
    vector<char> used(n, false);
    vector<int> result;
    result.reserve(max_len);
    int j = 0;
    while (j < max_len)
    {
        while (ptr[j] < (int)buckets[j].size() && used[buckets[j][ptr[j]]])
            ++ptr[j];
        int idx = buckets[j][ptr[j]];
        used[idx] = true;
        for (int k = j; k < (int)arr[idx].size(); ++k)
            result.push_back(arr[idx][k]);
        j = (int)result.size();
    }

    for (int i = 0; i < (int)result.size(); ++i)
    {
        if (i)
            cout << " ";
        cout << result[i];
    }
    cout << "\n";
}

int main()
{
    meow;
    int t;
    ci t;
    while (t--)
    {
        solve();
    }
    return 0;
}
