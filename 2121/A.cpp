#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int> x, int l, int r, int tgt)
{
    if (l >= r)
        return l;
    int mid = l + (r - l) / 2;
    if (x[mid] == tgt)
        return mid;
    if (x[mid] < tgt)
    {
        binSearch(x, mid + 1, r, tgt);
    }
    else
    {
        binSearch(x, l, mid - 1, tgt);
    }
}

int solve(int n, int s, vector<int> &x)
{
    int closest = binSearch(x, 0, n - 1, s);
    int steps = abs(x[closest] - s);
    int idx = closest;
    int og = idx;
    int counter = n;
    int curr = x[closest];
    while (counter != 0)
    {
        if (abs(x[idx] - x[idx + 1]) < abs(x[idx] - x[idx - 1]) && (idx + 1 < n))
        {
            steps += abs(x[idx] - x[idx + 1]);
            idx++;
            counter--;
        }
        else if (abs(x[idx] - x[idx + 1]) > abs(x[idx] - x[idx - 1]) && (idx - 1 >= 0))
        {
            steps += abs(x[idx] - x[idx - 1]);
            idx--;
            counter--;
        }
        else if (abs(x[idx] - x[idx + 1]) < abs(x[idx] - x[idx - 1]) && (idx + 1 >= n))
        {
            steps += abs(x[idx] - x[og - 1]);
            idx = og - 1;
            og = idx;
            counter--;
        }
        else if (abs(x[idx] - x[idx + 1]) > abs(x[idx] - x[idx - 1]) && (idx - 1 < 0))
        {
            steps += abs(x[idx] - x[og + 1]);
            idx = og + 1;
            og = idx;
            counter--;
        }
    }
    return steps;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        solve(n, s, x);
    }
}