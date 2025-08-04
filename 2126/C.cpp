#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int k, int n)
{
    int max_height = *max_element(arr.begin(), arr.end());

    // If the starting tower is already the tallest, output "YES"
    if (arr[k] == max_height)
    {
        cout << "YES" << endl;
        return;
    }

    // Collect all indices of the tallest towers
    vector<int> max_indices;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == max_height)
        {
            max_indices.push_back(i);
        }
    }

    // Check if it's possible to reach any of the tallest towers without drowning
    bool possible = false;
    for (int idx : max_indices)
    {
        int teleport_time = abs(arr[k] - arr[idx]);
        // The water level at the start of teleport is 1, and rises by 1 each second
        // Player drowns if water level exceeds starting tower's height during teleport
        if (1 + teleport_time <= arr[k])
        {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        k--; // converting to 0-based index
        solve(arr, k, n);
    }
    return 0;
}