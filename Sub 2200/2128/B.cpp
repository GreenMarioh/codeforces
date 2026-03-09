#include <bits/stdc++.h>
using namespace std;

bool isSafeToAdd(const deque<int>& last, int x) {
    if (last.size() < 4) return true;
    
    int a0 = last[0], a1 = last[1], a2 = last[2], a3 = last[3];
    
    if (a0 < a1 && a1 < a2 && a2 < a3 && a3 < x) {
        return false;
    }
    
    if (a0 > a1 && a1 > a2 && a2 > a3 && a3 > x) {
        return false;
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        int left = 0, right = n - 1;
        deque<int> lastRemoved;
        string result = "";
        
        for (int step = 0; step < n; step++) {
            bool canTakeLeft = isSafeToAdd(lastRemoved, p[left]);
            bool canTakeRight = isSafeToAdd(lastRemoved, p[right]);
            
            char choice;
            
            if (canTakeLeft && !canTakeRight) {
                choice = 'L';
            } 
            else if (canTakeRight && !canTakeLeft) {
                choice = 'R';
            } 
            else if (canTakeLeft && canTakeRight) {
                deque<int> leftSim = lastRemoved;
                if (leftSim.size() == 4) leftSim.pop_front();
                leftSim.push_back(p[left]);
                
                bool leftFutureSafe = true;
                if (left + 1 <= right) {
                    leftFutureSafe = isSafeToAdd(leftSim, p[left + 1]) || 
                                   isSafeToAdd(leftSim, p[right]);
                }
                
                deque<int> rightSim = lastRemoved;
                if (rightSim.size() == 4) rightSim.pop_front();
                rightSim.push_back(p[right]);
                
                bool rightFutureSafe = true;
                if (left <= right - 1) {
                    rightFutureSafe = isSafeToAdd(rightSim, p[left]) || 
                                    isSafeToAdd(rightSim, p[right - 1]);
                }
                
                if (leftFutureSafe && !rightFutureSafe) {
                    choice = 'L';
                } else if (rightFutureSafe && !leftFutureSafe) {
                    choice = 'R';
                } else {
                    choice = 'L';
                }
            } 
            else {
                choice = 'L';
            }
            if (choice == 'L') {
                if (lastRemoved.size() == 4) lastRemoved.pop_front();
                lastRemoved.push_back(p[left]);
                result.push_back('L');
                left++;
            } else {
                if (lastRemoved.size() == 4) lastRemoved.pop_front();
                lastRemoved.push_back(p[right]);
                result.push_back('R');
                right--;
            }
        }
        
        cout << result << "\n";
    }
    
    return 0;
}