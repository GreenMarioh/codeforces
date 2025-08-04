#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a)
{
    priority_queue<int> pq;
    for (int num : a)
    {
        pq.push(num);
    }
    while (pq.size() > 1)
    {
        int b = pq.top();
        pq.pop();
        int a = pq.top();
        pq.pop();
        int x = a + b - 1;
        pq.push(x);
    }
    return pq.top();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << solution(a) << "\n";
    }
}