#include <bits/stdc++.h>
using namespace std;

int solve(int n, int s, vector<int> &x) {
    
    int closestIdx = 0;
    int minDist = abs(x[0] - s);
    
    for (int i = 1; i < n; i++) {
        int dist = abs(x[i] - s);
        if (dist < minDist) {
            minDist = dist;
            closestIdx = i;
        }
    }
    
    // Calculate minimum steps to visit all positions
    // We have 3 strategies:
    // 1. Go to leftmost, then sweep right
    // 2. Go to rightmost, then sweep left  
    // 3. Go to closest, then optimally cover remaining range
    
    int leftmost = 0, rightmost = n - 1;
    
    // Strategy 1: Start -> leftmost -> rightmost
    int strategy1 = abs(s - x[leftmost]) + abs(x[rightmost] - x[leftmost]);
    
    // Strategy 2: Start -> rightmost -> leftmost
    int strategy2 = abs(s - x[rightmost]) + abs(x[rightmost] - x[leftmost]);
    
    // Strategy 3: Start -> closest -> cover remaining optimally
    int strategy3 = abs(s - x[closestIdx]);
    
    // From closest position, we need to cover the range [leftmost, rightmost]
    // We can either go left first then right, or right first then left
    int leftFromClosest = abs(x[closestIdx] - x[leftmost]);
    int rightFromClosest = abs(x[closestIdx] - x[rightmost]);
    int totalRange = abs(x[rightmost] - x[leftmost]);
    
    // Option 3a: closest -> left -> right
    int option3a = strategy3 + leftFromClosest + totalRange;
    
    // Option 3b: closest -> right -> left
    int option3b = strategy3 + rightFromClosest + totalRange;
    
    strategy3 = min(option3a, option3b);
    
    return min({strategy1, strategy2, strategy3});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        int result = solve(n, s, x);
        cout << result << endl;
    }
    
    return 0;
}