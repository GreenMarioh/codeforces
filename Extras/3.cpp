#include <bits/stdc++.h>
using namespace std;

// Function to check if three sides form a valid triangle
bool isValidTriangle(long long a, long long b, long long c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;

        bool found = false;

        // Iterate to find the first 0 bit (smallest missing power of 2)
        for (int i = 0; i < 60; i++)
        {
            if (!(x & (1LL << i)))
            {                             // Find the first zero bit
                long long y = (1LL << i); // y = 2^i

                // Make sure y < x (this is the key fix)
                if (y < x)
                {
                    long long z = x ^ y; // z = x XOR y

                    // Check triangle condition
                    if (isValidTriangle(x, y, z))
                    {
                        cout << y << "\n";
                        found = true;
                        break;
                    }
                }
            }
        }

        if (!found)
        {
            cout << "-1\n";
        }
    }

    return 0;
}